section .text

global _start

section .data
msg db 'hello world',0xa      ;0xa  is the ascii code for a new line
len equ $ -msg

section .text                 ;section declaration
_start:

mov edx,len
mov ecx,msg
mov ebx,1
mov eax,4
int 0x80
mov ebx,0
mov eax,1
int 0x80
