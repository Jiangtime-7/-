#include<stdio.h>
int main(){
	double a, b, c, d, t;
	printf("请输入4个数，然后程序会按从小到大顺序排列\n"); 
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
	printf("四个数从小到大顺序：%f %f %f %f",a, b, c, d);
	return 0;
}
//按从大到小顺序排序即将if语句的条件改一下 
//#include<stdio.h>
//int main(){
//	double a, b, c, d, t;
//	printf("请输入4个数，然后程序会按从大到小顺序排列\n"); 
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
//	printf("四个数从大到小顺序：%f %f %f %f",d, c, b, a);
//	return 0;
//}
