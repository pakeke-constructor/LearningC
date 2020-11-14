








	.file	"LL.c"
	.text
	.globl	_LL_next
	.def	_LL_next;	.scl	2;	.type	32;	.endef
_LL_next:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.globl	_LL_gv
	.def	_LL_gv;	.scl	2;	.type	32;	.endef
_LL_gv:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	movzbl	4(%eax), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_LL_add
	.def	_LL_add;	.scl	2;	.type	32;	.endef
_LL_add:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$20, %esp
	movl	12(%ebp), %eax
	movb	%al, -20(%ebp)
	movzbl	-20(%ebp), %eax
	movb	%al, -4(%ebp)
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	leal	-8(%ebp), %edx
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	leal	-8(%ebp), %edx
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.globl	_LL_toLinkedList
	.def	_LL_toLinkedList;	.scl	2;	.type	32;	.endef
_LL_toLinkedList:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -20(%ebp)
	movl	-8(%ebp), %eax
	movl	$0, (%eax)
	movl	12(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -12(%ebp)
	movl	$0, -4(%ebp)
	jmp	L7
L8:
	movl	-4(%ebp), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	-8(%ebp), %eax
	movl	%eax, (%esp)
	call	_LL_add
	addl	$1, -4(%ebp)
L7:
	movl	-4(%ebp), %eax
	cmpl	-12(%ebp), %eax
	jl	L8
	movl	-8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.globl	_LL_LinkedList
	.def	_LL_LinkedList;	.scl	2;	.type	32;	.endef
_LL_LinkedList:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$1, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_LL_toLinkedList
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "abcde\0"
LC1:
	.ascii "Y\0"
LC2:
	.ascii "Printf is working ....hmmmm\0"
LC3:
	.ascii "%c\12\0"
LC4:
	.ascii "Hello wolrd\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB18:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$LC0, 36(%esp)
	movl	$5, 4(%esp)
	movl	36(%esp), %eax
	movl	%eax, (%esp)
	call	_LL_toLinkedList
	movl	%eax, 32(%esp)
	movl	$0, 44(%esp)
	jmp	L13
L14:
	movl	$LC1, 28(%esp)
	movl	28(%esp), %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	32(%esp), %eax
	movl	%eax, (%esp)
	call	_LL_add
	addl	$1, 44(%esp)
L13:
	cmpl	$9, 44(%esp)
	jle	L14
	movl	32(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_LL_next
	movl	%eax, 40(%esp)
	movl	$LC2, (%esp)
	call	_printf
	jmp	L15
L16:
	movl	40(%esp), %eax
	movzbl	4(%eax), %eax
	movsbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$LC4, (%esp)
	call	_printf
	movl	40(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, 40(%esp)
L15:
	cmpl	$0, 40(%esp)
	jne	L16
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
