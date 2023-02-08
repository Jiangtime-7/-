#include<stdio.h>
int main(){
	double a, b, c;
	printf("请输入三个值\n");
	scanf("%lf %lf %lf",&a, &b, &c); 
	printf("程序将会为您选出其中的最大值\n");
	printf("%f\n",(a>b?a:b>c?(a>b?a:b):c));
	return 0;
}
