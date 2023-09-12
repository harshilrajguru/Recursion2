#include<stdio.h>
void main()
{
	int i,sum=0;
	printf("The sum of first 5 nautral numbers is:");
	for(i=1;i<=5;i++)
	{
		printf("\n %d",i);
		sum=sum+i;
	}
	printf("\n %d",sum);
}
