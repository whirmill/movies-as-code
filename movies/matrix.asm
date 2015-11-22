data segment
matrix db 1, 2, 3, 4, 5, 6, 7, 8, 9 ; load matrix in memory

ends

stack segment
dw 128 dup(0)
ends

code segment
start:
; set segment registers:
mov ax, data
mov ds, ax
mov es, ax

mov bx, matrix ; move matrix to offset bx
mov ch, 3
mov cl, 0