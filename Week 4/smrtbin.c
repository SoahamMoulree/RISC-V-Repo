#include<stdio.h>

int main()
{
    int ir_lid; // output from IR sensor for lid control: 1 is for close proximity, 0 is for no proximity
    int ir_full; // output from IR sensor for bin full detection: 1 is for bin full, 0 is for bin not full
    int servo_pos = 0; // servo position: 0 is for lid closed, 1 is for lid open
    int buzzer_state = 0; // buzzer state: 0 is off, 1 is on

    while (1)
    {
        // Read IR Sensor - 1 for lid control
        asm volatile(
            "andi %0, x30, 1\n\t"
            :"=r"(ir_lid)
            :
            :
        );

        // Read IR Sensor - 2 for bin full detection
        asm volatile(
            "andi %0, x30, 0x0002\n\t"
            :"=r"(ir_full)
            :
            :
        );

        // Set servo position based on IR sensor for lid control
        if (ir_lid)
        {
            servo_pos = 1; // Open the lid
        }
        else
        {
            servo_pos = 0; // Close the lid
        }

        // Set buzzer state based on IR sensor for bin full detection
        if (ir_full)
        {
            buzzer_state = 1; // Activate the buzzer
        }
        else
        {
            buzzer_state = 0; // Deactivate the buzzer
        }

        // Masks to clear the specific bits for servo and buzzer outputs
        int servo_mask = 0xFFFFFFFB; // Clear x30[2] bit
        int buzzer_mask = 0xFFFFFFF7; // Clear x30[3] bit

       

       
        asm volatile("slli x30, x30, 2\n\t"	
            "and x30, x30, %0 \n\t"
            "or x30, x30, %1 \n\t"
            :
            :"r"(servo_mask), "r"(servo_pos)
            :"x30"
        );

       
        asm volatile("slli x30, x30, 2\n\t"
            "and x30, x30, %0 \n\t"
            "or x30, x30, %1 \n\t"
            :
            :"r"(buzzer_mask), "r"(buzzer_state)
            :"x30"
        );
    }

    return 0;
}
