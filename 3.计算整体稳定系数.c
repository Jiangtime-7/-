#include<stdio.h>
#include<math.h>
#define i0 0.4
#define arf 0.49
int main(){
	double n, N, i;
	printf("���������򻯳�ϸ��\n"); 
	scanf("%lf",&i);
	n=(1+arf*(i-i0)+pow(i,2))/2; 
	N=1/(n+sqrt(pow(n,2)-pow(i,2)));
	printf("�����ȶ�ϵ����%.4f\n",N);
	return 0;
}
