#include<stdio.h>
int main(){
	double a, b, c;
	printf("����������ֵ\n");
	scanf("%lf %lf %lf",&a, &b, &c); 
	printf("���򽫻�Ϊ��ѡ�����е����ֵ\n");
	printf("%f\n",(a>b?a:b>c?(a>b?a:b):c));
	return 0;
}
