#include<stdio.h>
int main(){
	double a, b, c, max;
	printf("������a,b,c����ֵ");
	printf("\n"); 
	scanf("%lf %lf %lf",&a, &b, &c);
	if(b>c){
		max=b;
	}
	else max=c;
		while(a>max)max=a; 
	printf("���������ֵ��%f",max);
	return 0;
}
