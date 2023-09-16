#include<stdio.h>
int main()
{
	int row,col,n;
	char ch;
	printf("enter limit");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1,ch='A';col<=row;col++,ch++)
		{
			printf("%c%c\t",ch,ch+32);
		}
		printf("\n");
	}
}
