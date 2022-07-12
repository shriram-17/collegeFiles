
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h
.data
string db 'PSG COLLEGE OF TECHNOLOGY',0  
c db 'O'
.code
MOV BX,0
MOV AX,@DATA
MOV DS,AX
LEA DI, STRING

FOR:
    CMP [DI],0
    JE END

    MOV DL, [DI]
    CMP DL,c    
    JE I  
     
    JMP exit
    I:
      ADD BX,1
           
    exit:
      INC DI
       
         
    LOOP FOR    
END:


 
ret




