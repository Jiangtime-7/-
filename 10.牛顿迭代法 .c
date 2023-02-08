#include<stdio.h>
#include<math.h>
int main(){
    double x, x1;
    printf("请输入初始值\n程序将会为您用牛顿迭代法求方程在初始值处的近似解\n");
	scanf("%lf",&x);  
	do{
	x1=(2*pow(x,3)-4*pow(x,2)+6)/3;
    }while(fabs(x1-x)<1e-10);
    printf("方程的近似解是%f\n",x1);
    return 0; 
}
