#include<stdio.h>

int main()
{
    int ir_lid; // output from IR sensor for lid control: 1 is for close proximity, 0 is for no proximity
    int ir_full; // output from IR sensor for bin full detection: 1 is for bin full, 0 is for bin not full
    int servo_pos_1 = 0; // If both servo pos = 0 : motor will hold its position, if servo_pos_1 = 0 and servo_pos_2 = 1 then motor rotates clockwise,if servo_pos_1 = 1 and servo_pos_2 = 0 then motor 			    rotates anti-clockwise
    int servo_pos_2 = 0; 
    int buzzer_state = 0; // buzzer state: 0 is off, 1 is on

      //creating a test bench.
    int ir_lid_mask = 0xFFFFFE;// for ir_lid
    

    asm volatile(
    "and x30, x30, %0\n\t"    
    "or x30, x30, %1\n\t"       
    :
    : "r"(ir_lid_mask), "r"(0) // writing 1 in the x30[0] bit to activate the buzzer 
    : "x30"
);

    int ir_full_mask = 0xFFFFFFD; // for ir_full		
    asm volatile(
    "and x30, x30, %0\n\t"    
    "or x30, x30, %1\n\t"       
    :
    : "r"(ir_full_mask), "r"(1) // writing 1 in the x30[0] bit to activate the buzzer 
    : "x30"
);


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
        if (ir_lid == 1)
        {
            servo_pos_1 = 0; // Open the lid
            servo_pos_2 = 1; // Open the lid
		
	    for(int i = 0; i < 100000; i++){
		
			}
            servo_pos_1 = 0; // Hold the lid
            servo_pos_2 = 0; // Hold the lid
	    printf("lid is open\n");	
        }
        else
        {
            servo_pos_1 = 1; // Close the lid
            servo_pos_2 = 0; // Close the lid
		
	    for(int i = 0; i < 100000; i++){
		
			}
            servo_pos_1 = 0; // Hold the lid
            servo_pos_2 = 0; // Hold the lid
	    printf("lid is closed\n");	
        }

        // Set buzzer state based on IR sensor for bin full detection
        if (ir_full)
        {
            buzzer_state = 1; // Activate the buzzer
	    printf("buzzer activated\n");
        }
        else
        {
            buzzer_state = 0; // Deactivate the buzzer
	    printf("buzzer stopped\n");	
        }

        // Masks to clear the specific bits for servo and buzzer outputs
        int servo_mask = 0xFFFFFFF3; // Clear x30[2] and x30[3] bits (two bits for servo control)
        int buzzer_mask = 0xFFFFFFEF; // Clear x30[4] bit

        // Combine servo positions into one variable
        int servo_pos = (servo_pos_2) | (servo_pos_1<< 1);

        asm volatile("and x30, x30, %0\n\t"    
            "or x30, x30, %1\n\t"
            :
            :"r"(servo_mask), "r"(servo_pos << 2) // Shift servo_pos to match x30[2] and x30[3]
            :"x30"
        );

        asm volatile("and x30, x30, %0\n\t"
            "or x30, x30, %1\n\t"
            :
            :"r"(buzzer_mask), "r"(buzzer_state << 4) // Shift buzzer_state to match x30[4]
            :"x30"
        );
    }

    return 0;
}
