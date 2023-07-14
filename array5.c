#include<stdio.h>
main()
{
	int a[100],i,n1,n2,k,b[100],c[200],tn;
	printf("enter size of array = ");
	scanf("%d",&n1);
	
	printf("enter a array value =\n");
	for(i=0;i<n1;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	k=i;
	printf("enter size of array=");
	scanf("%d",&n2);
	
	printf("enter a array value=\n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	tn=n1+n2;
	printf("merge array value =\n");
	for(i=0;i<tn;i++)
	{
		printf("c[%d]=%d \n",i,c[i]);
	}
}