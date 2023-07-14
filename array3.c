#include<stdio.h>
main()
{
	int ave,a[100],n,i,sum,array;
	printf("enter the no of tearm=");
	scanf("%d",&n);
	printf("\n enter the no=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		ave=sum/n;
	}
	printf("ave of %d no is =%d \n",n,ave);
}