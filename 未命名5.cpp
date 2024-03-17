#include<stdio.h>
#include<math.h>
//计算高空抛物小球算法
int main(){float h =0;
           int t=0;

	printf("Please inout the height and the times of the ball\n");
	scanf("%f%d",&h,&t);
	int s=h;
	
	for(int i=1;i<=t;i++){
		h=h*1/2;
		s+=2*h;
		
	}
	
	printf("The height is %f m  when the times is %d",h,t);
	
	
}
