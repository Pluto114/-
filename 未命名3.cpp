#include<stdio.h>
#include<math.h>
#include<string.h>
//�߼�����ϰ
int main(){
	char ch[999];
	int i=0;
	int m=0,n=0,q=0,t=0;

		printf("������һ���ַ���");
		char c=getchar();
		
	while((ch[i++]=getchar())!='\n') ch[i]='\0';
	int c=strlen(ch);
	for (int i=0;i<=c-1;i++){
		if(ch[i]>='A'&&ch[i]<='z') m++;
		else if(ch[i]>='0'&&ch[i]<='9') n++;
		else if(ch[i]==' ') q++;
		else  t++;
		
		
	}
	 printf("��ĸ��%d��,������%d�����ո���%d��������������%d��",m,n,q,t);
	 
	 
}
