#include<stdio.h>
int main(){
	double a, b, c, max;
	printf("请输入a,b,c三个值");
	printf("\n"); 
	scanf("%lf %lf %lf",&a, &b, &c);
	if(b>c){
		max=b;
	}
	else max=c;
		while(a>max)max=a; 
	printf("三者中最大值是%f",max);
	return 0;
}
