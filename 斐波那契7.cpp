#include<stdio.h>
//计算斐波那契数列相关的分数的前n项和

int main(){
	int n;//求前n项和
	scanf("%d",&n);
	float a=1.0,b=1.0;
	float sum=0.0 ,temp;
	for(int i=1;i<=n;i++){
		a=a+b;
		temp=a/b;
		sum+=temp;
		b=b+a;
		temp=b/a;
		sum+=temp;
		
	}
	printf("前n项和为%f",sum);}
	
