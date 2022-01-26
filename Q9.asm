#corresponding Assembly program for the main function in Q5.c:
.text
.globl main
main:
li $t0, 11 #Number of iterations loaded in register t0 (1 to 10)
li $t1, 1 #This is our counter variable corresponding to i in Q5.c
li $t2,0 #This is the value to modify

loop:
beq $t1,$t0,end #if t1==10, end loop
add $t2,$t2,$t1
addi $t1,$t1,1
j loop

end:
li $v0, 10
syscall


#on runnin this file on QTSPIM, we can successfully see the value 55 in register t2

