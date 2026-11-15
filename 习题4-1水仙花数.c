#include<stdio.h>
int power(int num,int N){
	int I=1;
	for(I=1;N>0;N--){
		I=I*num;
	}
	return I;
} 

int get(int i,int n,int N){
	int x,plus=0;
	for(x=n;x>0;x/=10){
		int num=i/x;
		i%=x;
		plus+=power(num,N); 
	}
	return plus;
}

int main()
{
	int N;
	scanf("%d",&N);
	
	int NN=N;
	int n;
	for(n=1;NN>1;NN--){
		n*=10;
	}
	
	int i,j,k;
	for(i=n;i<n*10;i++){
		int plus=get(i,n,N);
		if(plus==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
