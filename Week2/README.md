# ASSIGNMENT 3

## SPIKE CODE (C- code provided in the files. Spike output shown here)
#### COUNTER

- Just write the C-Code for the program and follow the steps in the terminal:

![WhatsApp Image 2024-05-23 at 09 33 48_47c78d1c](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/b9732359-7d9c-447f-bb18-cbdd2f8c6a21)

#### MATRIX MULTIPLICATION

![WhatsApp Image 2024-05-23 at 09 33 48_37e0c915](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/31d4e023-d0f6-467e-8062-9864b26bfadc)

#### 4-BIT ALU

![WhatsApp Image 2024-05-23 at 09 33 48_9bc62b8e](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/48dc6878-4757-4d95-8e74-c417270dd5cf)

## GENERATING ASSEMBLY CODE FOR THE COUNTER, MATRIX AND ALU C CODE IN RISC V COMPILER

#### Assembly Code is uploaded as a txt file in this repo. Steps provided here :

#### MATRIX
#### USING GODBOLT

#### USING RISC V DISASSEMBLER
  - Comment out the libraries, printf and scanf statement from the c program.
  
 ![WhatsApp Image 2024-05-24 at 13 31 45_4dbf1913](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/8c082269-9b2e-4623-a989-03b336fb4e30)

  - Then use the following command to store the assembly code in a txt file.

![WhatsApp Image 2024-05-24 at 13 31 45_596b1077](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/ba3f3f08-19a3-4a90-8c7d-da2a70c6a5c0)
   
#### COUNTER
  - Perfom the same instructions as shown in the matrix example(Don't comment out the time.h library).

![WhatsApp Image 2024-05-24 at 13 50 46_1e965ce7](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/c90768a1-e0cd-435e-aae7-89ea30553467)


![WhatsApp Image 2024-05-24 at 13 38 43_02dbec14](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/8956d912-dfe0-44d2-af8b-2d4766831eaf)

#### 4-BIT ALU
  - Perform the same instructions as shown in the matrix example.

![WhatsApp Image 2024-05-24 at 13 51 32_112225a3](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/9daa5130-0263-4a17-be36-e859cd683fd0)

![WhatsApp Image 2024-05-24 at 13 31 45_079d39f1](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/da866149-839f-44c7-9673-86465a10d309)

## CALCULATING THE CPU PERFORMANCE.

- Taking the assembly code from the godbolt compiler and assign random number of clock cycles it takes to execute the program.

- The assembly codes are provided in a seperate file.The numbers in the bracket(In the Assembly Code file) represent the number of clock cycles it takes to perform a function. Assuming value of 1 clock cycle to be equal to 1ps.
    

  #### COUNTER

 CPU time = (total number of clock cycles) * (total number of instructions)*(time period of 1 clock cycle)
          =   (4 + 2 + 3 + 5 + 1 + 2 + 3 + 5 + 1 + 4 + 1 + 1 + 2 + 3 + 4 + 2 + 3 + 5 + 1 + 2 + 3 + 5 + 4 + 2 + 3 + 5 + 3 + 5 + 4 + 2 + 3 + 4 + 2 + 3 + 5 + 4 + 2 + 3 + 5 + 2 + 3 + 4 + 5 + 4 + 2 + 1) *(41)(1ps)
          = (116)*(41)*(1ps) = 4756ps = CPU time of counter program.
          

#### MATRIX MULTIPLICATION.    

CPU time = (total number of clock cycles) * (total number of instructions)*(time period of 1 clock cycle)
         = (119)(42)(1ps) = 4998ps


#### 4-BIT ALU   

CPU time = (total number of clock cycles) * (total number of instructions)*(time period of 1 clock cycle)
         = (169)(45)(1ps) = 7605ps






