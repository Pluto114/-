#include<stdio.h>
//���ӳ�������

int hou(int n){
	if (n==10) return 1;
	
	else return (2*(hou(n+1)+1));
	
}
int main(){int day=0;

	scanf("%d",&day);
	printf("�ڵ�%d�컹ʣ%d������",day,hou(day));
	
}
