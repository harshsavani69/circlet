#include<stdio.h>
main()

{
	int x,y,z;
	for(x=1;x<=5;x++)
	{
		for(z=5;z>x;z--)
		{
			printf(" ");
		}
		for(y=x;y>=1;y--)
		{
			printf("%d",y);
		}
		printf("\n");
	}
}
