
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h


    mov ax,2h;
    mov bx,4h;

    
    ;call swap
    ;call max
    call min

     
ret    
proc swap
        
        mov cx,ax
        mov ax,bx
        mov bx,cx
endp
ret

proc max
    cmp ax,bx
    jl l
    
    l:
    mov ax,bx
endp
ret
proc min
    cmp ax,bx
    jnl k
    
    k:
       mov ax,bx
endp
ret
