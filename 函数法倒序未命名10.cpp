#include<stdio.h>
void daoxu(char ch[],int n){
	if(n==1)printf("%c",ch);
	else {printf("%c",ch[n-1]);
	n-=1;
	
	void daoxu(char ch[],int n);
	}
	
}
int main(){
	char a[]="china";
	daoxu(a,5);
	
	
}
