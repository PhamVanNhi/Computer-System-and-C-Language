/*------Description-----------------------------------------------------------
	
	2 x 1 = 2	  3 x 1 = 3	....	9 x 1 = 9
	2 x 2 = 4	  3 x 2 = 6			  9 x 2 = 18
	.			.					.
	.			.					.
	.			.					.	
	2 x 9 = 18  3 x 9 = 27		9 x 9 = 81	
	
--------------------------------------------------------------------------------

----Author: Jacob Pham
	Tools: C-Free 5.0
	Weaknesses: Due to the small screen, the multiplication table can't show all. You can 
assign j < 6 to see more clearly
------------------------------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j;
	for(i=1;i<10;i++)
	{
		for(j=2;j<10;j++) // To see more clear, assign j < 6
		{
			printf("%d x %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
}
