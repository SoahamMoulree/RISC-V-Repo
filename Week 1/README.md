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



