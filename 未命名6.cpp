#include<stdio.h>
//猴子吃桃问题

int hou(int n){
	if (n==10) return 1;
	
	else return (2*(hou(n+1)+1));
	
}
int main(){int day=0;

	scanf("%d",&day);
	printf("在第%d天还剩%d个桃子",day,hou(day));
	
}
