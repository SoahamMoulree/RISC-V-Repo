# Assignment 2

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



