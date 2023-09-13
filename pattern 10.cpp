#include<stdio.h>
int main()
{
	int row,col,n;
	char k='A';
	printf("enter limit=");
	scanf("%d",&n);
	for(row=n;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c\t",k++);
		}
		printf("\n");
	}
}
