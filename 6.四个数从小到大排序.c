#include<stdio.h>
int main(){
	double a, b, c, d, t;
	printf("������4������Ȼ�����ᰴ��С����˳������\n"); 
	scanf("%lf %lf %lf %lf",&a, &b, &c, &d);
	if(c>d){
		t=c;c=d;d=t;
	}
	if(b>c){
		t=b;b=c;c=t;
	}
	if(a>b){
		t=a;a=b;b=t;
	}
	printf("�ĸ�����С����˳��%f %f %f %f",a, b, c, d);
	return 0;
}
//���Ӵ�С˳�����򼴽�if����������һ�� 
//#include<stdio.h>
//int main(){
//	double a, b, c, d, t;
//	printf("������4������Ȼ�����ᰴ�Ӵ�С˳������\n"); 
//	scanf("%lf %lf %lf %lf",&a, &b, &c, &d);
//	if(c>d){
//		t=c;c=d;d=t;
//	}
//	if(b>c){
//		t=b;b=c;c=t;
//	}
//	if(a>b){
//		t=a;a=b;b=t;
//	}
//	printf("�ĸ����Ӵ�С˳��%f %f %f %f",d, c, b, a);
//	return 0;
//}
