    global      AddVec4
    section     .text
AddVec4:
    movdqa      xmm0, [rdi]
    movdqa      xmm1, [rsi]
    addps       xmm0, xmm1
    movdqa      [rax], xmm0
    ret