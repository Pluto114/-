//求整数位数，倒序打印
#include<stdio.h>
int main(){
	int n;
	printf("Please input a number\n");
	scanf("%d",&n);
	int i=n/10;
	int j=1;
	int a=n%10;
	
	while(i!=0){
		i/=10;
			j++;
	}
	printf("有%d位数\n",j);
	while(a!=0){
		printf("%d",a);
	    n/=10;
	    a=(n%10);
	    
		
	}
	
}
