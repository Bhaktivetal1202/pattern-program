#include<stdio.h>
int main()
{
	char row,col;
	for(row='A';row<='D';row++)
	{
		for(col='A';col<=row;col++)
		{
			printf("%c",col);
		}
	printf("\n");
	}
}
