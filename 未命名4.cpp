#include<stdio.h>
//�����������㷨

int main(){
	int a,sum=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0)sum+=i;
		
	}
	sum=sum-a;
	
	printf("%d����������֮��Ϊ%d\n",a,sum);
	if((sum)==a)printf("%d������\n",a);
	else printf("%d��������\n",a);
}
