#include<stdio.h>
#include<math.h>
int main(){
	double x, y;
	printf("请输入一个小于1000的正数\n");
	label:scanf("%lf",&x);
	if(x<=0){
		printf("输入错误，请重新输入！\n");
		goto label; 
	}
	else{
	y=sqrt(x);
	}
	printf("这个数的平方根y=%.0f（已经四舍五入过）\n",y);
	return 0;
}
