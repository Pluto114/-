//��С���������⣬�ݹ鷨
#include<stdio.h>
int tao(int n){
	if(n==1) return 10;
	else return 2+tao(n-1);
	
}
int main(){
printf("%d",tao(2))	;

}
