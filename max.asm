    global      Max
    section     .text
Max:
    mov         rax, rdi
    cmp         rax, rsi
    cmovl       rax, rsi
    ret