//������λ���������ӡ
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
	printf("��%dλ��\n",j);
	while(a!=0){
		printf("%d",a);
	    n/=10;
	    a=(n%10);
	    
		
	}
	
}
