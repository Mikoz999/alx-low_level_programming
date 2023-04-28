section .data
    message db "Hello, Holberton", 0xA

section .text
    global _start

_start:
    ; Write the message to stdout
    mov rax, 1                  ; File descriptor: stdout
    mov rdi, 1                  ; Buffer (message) to write
    mov rsi, message            ; Length of the message
    mov rdx, 16                 ; Number of bytes to write
    syscall

    ; Exit program
    mov rax, 60                 ; System call number for exit
    xor rdi, rdi                ; Exit status (0)
    syscall

