#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se,found=0;
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			found=1;
			break;
		}
	}
	if (found==0)
	{
	printf("False");
	}
else
{
    printf("True");
}
}