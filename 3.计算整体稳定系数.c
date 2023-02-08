#include<stdio.h>
#include<math.h>
#define i0 0.4
#define arf 0.49
int main(){
	double n, N, i;
	printf("请输入正则化长细比\n"); 
	scanf("%lf",&i);
	n=(1+arf*(i-i0)+pow(i,2))/2; 
	N=1/(n+sqrt(pow(n,2)-pow(i,2)));
	printf("整体稳定系数是%.4f\n",N);
	return 0;
}
