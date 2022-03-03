#include<stdio.h>
void display(int*, int);
void main()
{
	int num[] = {1, 2, 3, 4, 5};
	display(&num[0], 5);
}

void display(int *j, int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("\n element = %d",*j);
		j++;
	}
}
