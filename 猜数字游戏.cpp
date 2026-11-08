#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
	srand((unsigned)time(NULL));
	int n = rand()%100+1;
	int a;
		scanf("%d",&a);
	while(a!=n){
	if(a<n)
	{
	printf("小了");
	}
		if(a>n)
		{
			printf("大了"); 
		}
			scanf("%d",&a);
	}
		if(a==n){
		printf("猜对了");
				}
	return 0;
 } 
