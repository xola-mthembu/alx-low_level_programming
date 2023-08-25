section .data
    hello db "Hello, Holberton", 0
    newline db 10, 0
    format db "%s%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    mov rdx, newline
    xor rax, rax
    call printf
    pop rbp
    ret

