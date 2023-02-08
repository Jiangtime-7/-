#include<stdio.h>
int main(){
	double x, y;
	printf("输入自变量x\n");
	scanf("%lf",&x);
	if(x<1){
		y=x;
	}
	if(x>=1&&x<10){
		y=2*x-1;
	}
	if(x>=10){
		y=3*x-11;
	}
	printf("函数值y=%f\n",y);
	return 0;
}
