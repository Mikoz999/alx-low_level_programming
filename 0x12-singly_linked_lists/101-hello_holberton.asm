section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main
    extern printf, exit

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Print the string
    mov rdi, format
    mov rsi, hello
    xor rax, rax ; Clear RAX register
    call printf

    ; Clean up stack frame
    leave

    ; Exit the program
    xor edi, edi
    call exit

