//向一个排好序的数组中插入一个数，按原来顺序
#include<stdio.h>
void paixu( int a[],int n,int len);
int main(){
	int c[6]={1,2,3,4,6,0};
	paixu(c,5,6);
	
	
}
void paixu(int a[],int n,int len){
	for(int i=0;i<=len-1;i++){
		if(a[i]>n){
			for(int j=len-1;j>i;j--){
				a[j]=a[j-1];
				
			}
			a[i]=n;
			break;
		}
	}
	for(int i=0;i<=len-1;i++){
		printf(" %d ",a[i]);
		
		
	}
}
