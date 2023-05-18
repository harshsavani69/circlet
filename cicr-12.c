#include<stdio.h>

main()

{
	int r,m,d;
	for(r=5;r>=1;r--)
	{
		for(d=5;d>r;d--)
		{
			printf(" ");
			
		}
		for(m=1;m<=r;m++)
		{
			printf("%d",m);
			
		}
		printf("\n");
	}
}
