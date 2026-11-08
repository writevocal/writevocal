#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
		for(i=1;i<=a;i++)
	{		for(b=1;b<=i;b++)
		{		printf("%d*%d=%d ",b,i,i*b);
					if(b==i)
					printf("\n");
		}
		
	}
	return 0;
 } 
