#include<stdio.h>
int main()
{
	int row,col,n,k=1;
	printf("enter limit");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d\t",k++);
		}
		printf("\n");
	}
}
