#include<stdio.h>
#include<math.h>
int main(){
	double x, y;
	printf("������һ��С��1000������\n");
	label:scanf("%lf",&x);
	if(x<=0){
		printf("����������������룡\n");
		goto label; 
	}
	else{
	y=sqrt(x);
	}
	printf("�������ƽ����y=%.0f���Ѿ������������\n",y);
	return 0;
}
