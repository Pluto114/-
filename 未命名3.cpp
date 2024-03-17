#include<stdio.h>
#include<math.h>
#include<string.h>
//逻辑题练习
int main(){
	char ch[999];
	int i=0;
	int m=0,n=0,q=0,t=0;

		printf("请输入一串字符串");
		char c=getchar();
		
	while((ch[i++]=getchar())!='\n') ch[i]='\0';
	int c=strlen(ch);
	for (int i=0;i<=c-1;i++){
		if(ch[i]>='A'&&ch[i]<='z') m++;
		else if(ch[i]>='0'&&ch[i]<='9') n++;
		else if(ch[i]==' ') q++;
		else  t++;
		
		
	}
	 printf("字母有%d个,数字有%d个，空格有%d个，其他符号有%d个",m,n,q,t);
	 
	 
}
