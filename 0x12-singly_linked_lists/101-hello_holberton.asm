section .data
    hello db "Hello, Holberton",10   ; The string to be printed, 10 is ASCII for newline
    format db "%s",0                ; Format specifier for a string, null-terminated

section .text
    global _start
    extern printf

_start:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit (64-bit)
    xor rdi, rdi        ; status: 0
    syscall

