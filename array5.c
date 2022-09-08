// c program to find the positions of duplicate elements in an array
#include <stdio.h>
int main()
{
	int i,j,n,arr[100],flag=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				flag = 1;
				printf("Duplicate elements found at position %d and %d",i,j);
			}	
		}
	}
	if (flag == 0)
	{
		printf("\n No duplicates found");
	}
	return 0;

}
