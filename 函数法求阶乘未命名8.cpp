#include<stdio.h>
//��������׳�֮

//�ݹ鷨
int sum(int n){
	if(n==1)return 1;
	else return n*sum(n-1);
}
int main(){

	int m,answer=0;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		answer+=sum(i);
	}
	printf("%d",answer);
	
}























