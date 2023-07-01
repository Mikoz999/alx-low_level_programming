section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

global main

main:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    xor eax, eax
    call printf

    ; Exit the program
    xor edi, edi
    mov eax, 60
    syscall

