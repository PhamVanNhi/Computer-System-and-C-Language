/*------------------------------------------------------------------------------
	Enter the four numbers, arranged in order from large to small and from 
small to large according to the following menu.
		1. From large to small.
		2. From small to large.
		3. The end.

--------------------------------------------------------------------------------
											Author: Jacob Pham
											Tools: C-Free 5.0
											__________________________________*/

#include <stdio.h>
#include <conio.h>

main()
{
	int a, b, c, d,temp;
	char s,i;
	printf("Nhap vao 4 so bat ky\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(i=1;i<5;i++)
	{
		if(a>b)
		{
			temp = a;
			a = b;
			b = temp;	
		}
		if(b>c)
			{
				temp = b;
				b = c;
				c = temp;
			}
		if(c>d)
			{
				temp = c;
				c = d;
				d = temp;
			}
	}
	printf("1. Tu lon toi nho\n2.Tu nho toi lon\n3. Ket Thuc\n");
	again:
	printf("Vui long chon 1 trong 3 su lua cho tren\n");
	scanf("\t%d",&s);
	if((s<1)||(s>3))
		goto again;
	switch(s)
	{
		case 1:
			printf("Sap xep theo thu tu tu lon den nho la: %d %d %d %d\a\n",d,c,b,a);
			break;
		case 2:
			printf("Sap xep theo thu tu tu nho den lon la: %d %d %d %d\a\a\n",a,b,c,d);
			break;
		case 3:
			printf("The End \a\a\a\n");
			break;
		default:
			break;
	}
}
