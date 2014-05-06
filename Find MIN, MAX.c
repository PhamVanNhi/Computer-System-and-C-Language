/*----------Description----------------------------
	Enter any three numbers on the screen
	Find the MAX, MIN number in that three numbers 
	
---------------------------------------------------	
	Author: Jacob Pham
	Tools: C-Free 5.0
--------------------------------------------------*/


#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c, max, min, temp,i;
	printf("Nhap vao 3 so nguyen\n");
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<4;i++)
	{
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		if(b>c)
		{
			temp=b;
			b=c;
			c=temp;
		}
	}
	printf("So lon nhat trong 3 so la: %d \nSo nho nhat la: %d\n",c,a);
}

