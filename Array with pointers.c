#include<stdio.h>
void main()
{
	int marks[] = {1,2,3,4,5};
	int *j, i;
	j=&marks[0];
	for(i=0;i<=4;i++)
	{
		printf("\n address of elements %d",j);
		printf(" value of elements %d",*j);
		j++;
	}
}
