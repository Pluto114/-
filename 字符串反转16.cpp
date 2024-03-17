//×Ö·û´®·´×ª
#include<stdio.h>
void fanzhuan(char c[],int n);

int main(){
	char a[]="china new bee";
	int b=sizeof(a)/sizeof(a[0]);
	
	fanzhuan(a,b);
	
}

void fanzhuan(char c[],int n){
	for(int i=n-1;i>=0;i--){
		printf("%c",c[i]);
		
	}
}
