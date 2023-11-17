	SECTION .data
msg:	 db "Hello, World", 10

	SECTION .text
	 global main
main:
	mov rdx, 13
	mov rcx, msg
	mov rbx, 1
	mov rax, 4
	int 0x80

	mov rbx, 0
	mov rax, 1
	int 0x80
