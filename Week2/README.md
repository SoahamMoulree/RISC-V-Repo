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

  #### COUNTER
-The numbers in the bracket represent the number of clock cycles it takes to perform a function. Assuming value of 1 clock cycle to be equal to 1ps.


addi    sp,sp,-48    (4)
sw      ra,44(sp)    (2)
lw      s0,40(sp)    (3)
call    clock        (5)
nop                 (1)
mv      a3,a0       (2)
add     a5,a4,a5    (3)
slt     a5,a3,a5    (5)
andi    a5,a5,0xff  (1)
bne     a5,zero,.L2 (4)
nop                 (1)
nop                 (1)
lw      ra,44(sp)   (2)
addi    sp,sp,48    (3)
jr      ra           (3)
.LC0:
        .string "Count value is: %d\n"
display(int):
        addi    sp,sp,-32    (4)
        sw      ra,28(sp)    (2)
        lw      s0,24(sp)    (3)
        call    printf       (5)
        nop                    (1)
        lw      ra,28(sp)   (2)
        addi    sp,sp,32    (3)
        jr      ra           (3)
.LC1:
        .string "Start counter"
main:
        addi    sp,sp,-32    (4)
        sw      ra,28(sp)    (2)
        lw      s0,24(sp)    (3)
        call    puts         (5)
        sw      zero,-20(s0) (2)
.L6:
        lw      a0,-20(s0)  (3)
        call    display(int) (5)
        lw      a5,-20(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-20(s0)   (2)
        lw      a4,-20(s0)   (3)
        li      a5,16        (5)
        bne     a4,a5,.L5    (4)
        sw      zero,-20(s0) (2)
.L5:
        li      a5,49152     (5)
        addi    a0,a5,848    (4)
        call    delay(int)   (5)
        j       .L6          (1)

 CPU time = (total number of clock cycles) * (total number of instructions)*(time period of 1 clock cycle)
          =   (4 + 2 + 3 + 5 + 1 + 2 + 3 + 5 + 1 + 4 + 1 + 1 + 2 + 3 + 4 + 2 + 3 + 5 + 1 + 2 + 3 + 5 + 4 + 2 + 3 + 5 + 3 + 5 + 4 + 2 + 3 + 4 + 2 + 3 + 5 + 4 + 2 + 3 + 5 + 2 + 3 + 4 + 5 + 4 + 2 + 1) *(41)(1ps)
          = (116)*(41)*(1ps) = 4756ps = CPU time of counter program.
          

#### MATRIX MULTIPLICATION.

- Assuming the same values of the instruction cycles as before and if assigning new values to functions that were not present in the previous code.main:


main:
        addi    sp,sp,-96    (4)
        sw      ra,92(sp)    (2)
        sw      s0,88(sp)    (2)
        addi    s0,sp,96     (4)
        sw      zero,-20(s0) (1)
        lui     a5,%hi(.LC0) (1)
        addi    a5,a5,%lo(.LC0) (4)
        lw      a2,0(a5)     (3)
        lw      a3,4(a5)     (3)
        lw      a4,8(a5)     (3)
        sw      a2,-72(s0)   (2)
        sw      a3,-68(s0)   (2)
        sw      a4,-64(s0)   (2)
        lw      a5,12(a5)    (3)
        sw      a5,-60(s0)   (2)
        lui     a5,%hi(.LC1) (1)
        addi    a5,a5,%lo(.LC1) (4)
        lw      a2,0(a5)     (3)
        lw      a3,4(a5)     (3)
        lw      a4,8(a5)     (3)
        sw      a2,-88(s0)   (2)
        sw      a3,-84(s0)   (2)
        sw      a4,-80(s0)   (2)
        lw      a5,12(a5)    (3)
        sw      a5,-76(s0)   (2)
        sw      zero,-24(s0) (1)
        j       .L2           (1)
.L7:
        sw      zero,-28(s0) (1)
        j       .L3           (1)
.L6:
        sw      zero,-32(s0) (1)
        j       .L4           (1)
.L5:
        lw      a5,-24(s0)   (3)
        slli    a4,a5,1       (4)
        lw      a5,-32(s0)   (3)
        add     a4,a4,a5     (3)
        addi    a5,s0,-72    (4)
        slli    a4,a4,2       (4)
        add     a5,a4,a5     (3)
        lw      a4,0(a5)     (3)
        lw      a5,-32(s0)   (3)
        slli    a3,a5,1       (4)
        lw      a5,-24(s0)   (3)
        add     a3,a3,a5     (3)
        addi    a5,s0,-88    (4)
        slli    a3,a3,2       (4)
        add     a5,a3,a5     (3)
        lw      a5,0(a5)     (3)
        mul     a5,a4,a5     (5)
        lw      a4,-20(s0)   (3)
        add     a5,a4,a5     (3)
        sw      a5,-20(s0)   (2)
        lw      a5,-32(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-32(s0)   (2)
.L4:
        lw      a4,-32(s0)   (3)
        li      a5,1          (4)
        ble     a4,a5,.L5     (4)
        lw      a5,-24(s0)   (3)
        slli    a4,a5,1       (4)
        lw      a5,-28(s0)   (3)
        add     a4,a4,a5     (3)
        addi    a5,s0,-56    (4)
        slli    a4,a4,2       (4)
        add     a5,a4,a5     (3)
        lw      a4,-20(s0)   (3)
        sw      a4,0(a5)     (2)
        sw      zero,-20(s0) (1)
        lw      a5,-28(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-28(s0)   (2)
.L3:
        lw      a4,-28(s0)   (3)
        li      a5,1          (4)
        ble     a4,a5,.L6     (4)
        lw      a5,-24(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-24(s0)   (2)
.L2:
        lw      a4,-24(s0)   (3)
        li      a5,1          (4)
        ble     a4,a5,.L7     (4)
        sw      zero,-36(s0)  (1)
        j       .L8           (1)
.L11:
        sw      zero,-40(s0)  (1)
        j       .L9           (1)
.L10:
        lw      a5,-40(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-40(s0)   (2)
.L9:
        lw      a4,-40(s0)   (3)
        li      a5,1          (4)
        ble     a4,a5,.L10    (4)
        lw      a5,-36(s0)   (3)
        addi    a5,a5,1      (4)
        sw      a5,-36(s0)   (2)
.L8:
        lw      a4,-36(s0)   (3)
        li      a5,1          (4)
        ble     a4,a5,.L11    (4)
        li      a5,0          (4)
        mv      a0,a5         (2)
        lw      ra,92(sp)    (2)
        lw      s0,88(sp)    (2)
        addi    sp,sp,96     (4)
        jr      ra            (3)

CPU time = (total number of clock cycles) * (total number of instructions)*(time period of 1 clock cycle)
         = (119)(42)(1ps) = 4998ps


#### 4-BIT ALU

  








