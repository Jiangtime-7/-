#include<stdio.h>
#include<math.h>
int main(){
    double x, x1;
    printf("�������ʼֵ\n���򽫻�Ϊ����ţ�ٵ������󷽳��ڳ�ʼֵ���Ľ��ƽ�\n");
	scanf("%lf",&x);  
	do{
	x1=(2*pow(x,3)-4*pow(x,2)+6)/3;
    }while(fabs(x1-x)<1e-10);
    printf("���̵Ľ��ƽ���%f\n",x1);
    return 0; 
}
