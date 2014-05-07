/*-----Description-------------------------------------------------------------
	Write a program to enter a character and proccesed according to the following
	requirements:
	If the character is uppercase,  convert to lowercase. Output results.
	If the character is lowercase, not doing anything
	If the character is number, output the sentences: "This is a figure"
--------------------------------------------------------------------------------

				Author: Jacob Pham
				Tools: C-Free 5.0
-------------------------------------------------------------------------------*/

#include <stdio.h>

void main()
{
	unsigned char n;
	printf("Nhap vao mot ky tu: ");
	scanf("%c",&n);
	if((n>='A')&&(n<='Z'))
		printf("Ky tu viet thuong la: %c\n",n+32);
	else if((n>='a')&&(n<='z'))
		printf("Ky tu nhap vao la ky tu thuong\n");
	else if((n>='0')&&(n<='9'))
		printf("Ky tu nhap vao la ky tu so\n");
	else
		printf("Ky tu nhap vao la ky dac biet\n");
		
}
