#include<stdio.h>

main()

{
	int h,x,s;
	for(h=5;h>=1;h--)
	{
		for(s=h;s>1;s--)
		{
			printf(" ");
		}
		for(x=h;x<=5;x++)
		{
			printf("%d",x);
		}
		printf("\n");
	}
}
