#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,no,f=0;
	clrscr();
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter arrays elements:");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);

	}

	clrscr();
	printf("enter no for checking=");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		if(a[i]==no)
		{
			f=1;
		}
	}
	if(f=1)
	{
		printf("%d is present in array\n",no);
	}
	else
	{
		printf("no is not present");
	}

	getch();
}