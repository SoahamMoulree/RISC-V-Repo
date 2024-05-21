# Assignment 2

## Q1

![WhatsApp Image 2024-05-20 at 21 52 57_cf32e258](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/f6c662c3-8aab-485e-8598-8858b063284f)

![WhatsApp Image 2024-05-20 at 21 53 13_5da0e108](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/38546ec6-1258-46d4-8eb4-f52c3840ddc1)

![WhatsApp Image 2024-05-20 at 21 53 25_c6f50997](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/3670ae94-d6d2-4e2e-9739-45747f066664)


![WhatsApp Image 2024-05-20 at 21 53 33_e12106ec](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/78270289-d34b-4132-9eb1-9205208edf74)



## 4 Bit ALU C code 


    #include<stdio.h>
    #include<stdlib.h>

    int main(){
    int number1,number2;
    char function;
    int result = 0;
    printf("Enter the charcter of the function you want to perform : \n");
    scanf("%c", &function);
    printf("Enter number1 and number2 respectively ");
    scanf("%d %d", &number1, &number2);
    switch(function){
        
        case '+':
        result = number1+number2;
        break;
        
        case '-':
        result = number1-number2;
        break;
        
        case '/':
        result = number1/number2;
        break;
        
        case '*':
        result = number1*number2;
        break;

        case '&':
        result = number1&number2;
        break;

        case '|':
        result = number1|number2;
        break;

        case '^':
        result = number1^number2;
        break;

        default:
            printf("Cannot perform this operation\n");
            
        
    }
    printf("The result is : %d\n", result&0x0F);
    
    return(0);
    
    
    }

#### OUTPUT FOR THE C CODE:

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/be533228-b65b-490f-b990-7c30b97355c0)

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/a646413a-2b12-4119-8683-4c0d1d55b4c8)




## VERILOG CODE FOR 4-BIT ALU

#### Verilog Code

Code provided in the file "alu.v"

![WhatsApp Image 2024-05-21 at 08 40 34_f81d3ec9](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/398c01ae-5182-4acb-a154-fb8b29ddf79b)


#### Testbench Code

code provided in the file "alu_tb.v"

![WhatsApp Image 2024-05-21 at 08 40 34_b5bfce65](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/f680ef42-5f06-4458-9f65-7b309e4f3658)


#### After creating the testbench file, compile the code in the terminal as follows:

![WhatsApp Image 2024-05-21 at 08 40 35_9a028ea0](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/589b3abb-27f1-47ab-9061-30560fa065ed)


#### Final GTKWave Simulation

![WhatsApp Image 2024-05-21 at 08 40 35_7604a2aa](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/11499109-7fb9-443f-a945-1818d98787c3)



    



