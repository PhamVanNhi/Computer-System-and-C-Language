/*-----------Description--------------------------------------------------------
	Enter an integer number into the screen from the keyboard
	Check if that number is even or odd
		-If it's even, ouput a octal number.
		Else output a hexadecimal number.
--------------------------------------------------------------------------------

	Author: Jacob Pham
	Tools: C-Free 5.0
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&n);
	if(n%2==0)
		printf("So %d la so chan, duoc viet duoi dang bat phan la: %o\n",n,n);
	else
		printf("So %d la so le, duoc viet duoi dang thap luc phan la: %x\n",n,n);
}
