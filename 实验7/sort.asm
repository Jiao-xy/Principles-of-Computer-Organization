 .text
#################################################################################
#本程序实现（字节地址0x200，字地址0x80）开始的8个字单元的降序排序,此程序可在mars mips仿真器中运行,运行时请将Mars Setting中的Memory Configuration设置为Compact，data at address 0
#
#################################################################################
 .text
sort_init:
 addi $s0,$0,-1   #$0特殊寄存器，返回值永远为0,addi加立即数，并检测溢出,把-1和$0中的值相加，结果放到$s0中
 addi $s1,$0,0    #$s1存放偏移地址，$s1存放数据
 sw $s0,512($s1)  #将$s0的内容放到内存[512+$s1]处，512:0b01,0000,0000=0x0200
 addi $s0,$s0,1
 addi $s1,$s1,4   #地址加1，字节寻址，存放的数据是4字节数据
 sw $s0,512($s1)  
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 addi $s0,$s0,1
 addi $s1,$s1,4
 sw $s0,512($s1)
 #从0x00000200地址开始到0x00001c00
 
 
 
 add $s0,$zero,$zero   
 addi $s1,$zero,28   #排序区间
sort_loop:
 lw $s3,512($s0)     
 lw $s4,512($s1)
 slt $t0,$s3,$s4
 beq $t0,$0,sort_next   #降序排序
 sw $s3, 512($s1)
 sw $s4, 512($s0)   
sort_next:
 addi $s1, $s1, -4   
 bne $s0, $s1, sort_loop  
 
 
 addi $s0,$s0,4
 addi $s1,$zero,28
 bne $s0, $s1, sort_loop
 addi   $v0,$zero,10         # system call for exit
 syscall                  # we are out of here.   
