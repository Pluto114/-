#include<stdio.h>
//����쳲�����������صķ�����ǰn���

int main(){
	int n;//��ǰn���
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
	printf("ǰn���Ϊ%f",sum);}
	
