#include<stdio.h>

main()

{
	int r,q,s;
	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
			
		}
		for(q=1;q<=r;q++)
		{
			printf("%d",q);
		}
		printf("\n");
	}
	for(r=2;r<=5;r++)
	{
		for(s=r;s>1;s--)
		{
			printf(" ");
		}
		for(q=r;q<=5;q++)
		{
			printf("%d",q);
		}
		printf("\n");
	}
	
}
