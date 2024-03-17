//求矩阵对角线数字之和
#include<stdio.h>
int main(){
	int sum=0;
	
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<=2;i++){
	  for(int j=0;j<=2;j++){
	  	if(i==j)sum+=a[i][j];
	  	
	  }	
	}
	printf("%d",sum);
	
}
