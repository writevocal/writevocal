#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d/%d",&a,&b);

		for(c=1;c<=b && c<=a;c++)
		{
			if(b%c==0 && a%c==0)
			{
				d=a/c;
				e=b/c;
			
			}
		}
		printf("%d/%d",d,e);
	return 0;
 } 
