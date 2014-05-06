/*----------Desciption-----------------------------------

Enter a number from keyboard to th screen.
   +If that number is negative, calculate the square root.
   +Conversely, Error and exit th program.
---------------------------------------------------------*/
/*	Author:___Jacob_Pham______
	Tools:____C-Free_5.0______
----------------------------------------------------------*/

#include <conio.h>
#include <stdio.h>
#include <math.h>

main()
{
	double n, canbac2;
	printf("Nhap mot so nguyen: n = ");
	scanf("%lf",&n);
	if(n>=0)
	{
		canbac2 = sqrt(n);
		printf("Can bac hai cua %lf la %lf\n",n,canbac2);
	}
	else
		printf("Error !\n");
}
