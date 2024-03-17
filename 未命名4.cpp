#include<stdio.h>
//计算完数的算法

int main(){
	int a,sum=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0)sum+=i;
		
	}
	sum=sum-a;
	
	printf("%d的所有因子之和为%d\n",a,sum);
	if((sum)==a)printf("%d是完数\n",a);
	else printf("%d不是完数\n",a);
}
