//�ж�һ�������Ƿ�Ϊ����
#include<stdio.h>
#include<math.h>

 void sushu(int a){ 
 
int sign=1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			sign=0;
			printf("%d��������",a);
		
			break;
			
			
		}
		
	}
	if(sign==1)printf("%d������",a);
}
int main(){int b;

	scanf("%d",&b);
	 sushu(b);
	 return 0;
	 
	 
}

