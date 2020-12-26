    global      AddVec4
    section     .text
AddVec4:
    movdqa      xmm0, [rdi]     ;FIRST PARAMETER IN RDI
    movdqa      xmm1, [rsi]     ;SECOND PARAMETER IN RSI
    addps       xmm0, xmm1      ;4x4 FLOAT ADD IN SINGLE INSTRUCTION
    movdqa      [rdx], xmm0     ;MOVE RESULT IN THIRD PARAMETER
    ret