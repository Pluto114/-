//�жϻ�����
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n,a;
	printf("�����룺\n");
	int j=1;
	char m[10];
	int sign=0;
	
	scanf("%d",&n);
	a=n/10;
	while(a!=0){
		j++;
		n/=10;
		a=n/10;
		
	}
	printf("��%dλ��\n",j);
printf("������һ�� �����10λ�������пո�\n");
scanf("%s",&m);
for(int i=0;i<=strlen(m)-1;i++){
	if(m[i]==m[strlen(m)-1-i]){sign =1;continue;}
	else  break;
	
	
}
	if(sign==1)printf("�ǻ�����\n");
	else printf("bushi\n");
	
	
	
	
	
}
