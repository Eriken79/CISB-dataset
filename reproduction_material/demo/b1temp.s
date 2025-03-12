	.text
	.file	"b1temp.c"
	.globl	strcmp                          # -- Begin function strcmp
	.p2align	4, 0x90
	.type	strcmp,@function
strcmp:                                 # @strcmp
	.cfi_startproc
# %bb.0:
	pushq	%r14
	.cfi_def_cfa_offset 16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	pushq	%rax
	.cfi_def_cfa_offset 32
	.cfi_offset %rbx, -24
	.cfi_offset %r14, -16
	movq	%rsi, %r14
	movq	%rdi, %rbx
	testq	%rdi, %rdi
	sete	%al
	testq	%rsi, %rsi
	setne	%cl
	xorb	%al, %cl
	je	.LBB0_6
# %bb.1:
	cmpq	%r14, %rbx
	je	.LBB0_7
# %bb.2:
	xorl	%eax, %eax
	.p2align	4, 0x90
.LBB0_3:                                # =>This Inner Loop Header: Depth=1
	movzbl	(%rbx,%rax), %ecx
	movzbl	(%r14,%rax), %edx
	cmpb	%dl, %cl
	jne	.LBB0_8
# %bb.4:                                #   in Loop: Header=BB0_3 Depth=1
	addq	$1, %rax
	testl	%ecx, %ecx
	jne	.LBB0_3
.LBB0_7:
	xorl	%ebx, %ebx
	jmp	.LBB0_9
.LBB0_6:
	leaq	.L.str(%rip), %rdi
	xorl	%eax, %eax
	callq	printf@PLT
	subl	%r14d, %ebx
	jmp	.LBB0_9
.LBB0_8:
	subl	%edx, %ecx
	movl	%ecx, %ebx
.LBB0_9:
	movl	%ebx, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	strcmp, .Lfunc_end0-strcmp
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%r14
	.cfi_def_cfa_offset 16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	pushq	%rax
	.cfi_def_cfa_offset 32
	.cfi_offset %rbx, -24
	.cfi_offset %r14, -16
	movq	8(%rsi), %r14
	movq	16(%rsi), %rbx
	testq	%r14, %r14
	sete	%al
	testq	%rbx, %rbx
	setne	%cl
	xorb	%al, %cl
	je	.LBB1_6
# %bb.1:
	cmpq	%rbx, %r14
	je	.LBB1_7
# %bb.2:
	xorl	%eax, %eax
	.p2align	4, 0x90
.LBB1_3:                                # =>This Inner Loop Header: Depth=1
	movzbl	(%r14,%rax), %ecx
	movzbl	(%rbx,%rax), %edx
	cmpb	%dl, %cl
	jne	.LBB1_8
# %bb.4:                                #   in Loop: Header=BB1_3 Depth=1
	addq	$1, %rax
	testl	%ecx, %ecx
	jne	.LBB1_3
.LBB1_7:
	xorl	%r14d, %r14d
	jmp	.LBB1_9
.LBB1_6:
	leaq	.L.str(%rip), %rdi
	xorl	%eax, %eax
	callq	printf@PLT
	subl	%ebx, %r14d
	jmp	.LBB1_9
.LBB1_8:
	subl	%edx, %ecx
	movl	%ecx, %r14d
.LBB1_9:
	leaq	.L.str.1(%rip), %rdi
	movl	%r14d, %esi
	xorl	%eax, %eax
	callq	printf@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%r14
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"CISB"
	.size	.L.str, 5

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"%d"
	.size	.L.str.1, 3

	.ident	"Ubuntu clang version 14.0.6"
	.section	".note.GNU-stack","",@progbits
	.addrsig
