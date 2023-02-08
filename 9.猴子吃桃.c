#include<stdio.h>
int main(){
	int i, a=1;
	for(i=10;i>1;i--){
		a=(1+a)*2;
	}
	printf("第一天共摘了%d个桃子\n",a);
	return 0;
}
//如果是吃了前一天的一半之后再多吃了两个的话 
//#include<stdio.h>
//int main(){
//	int i, a=1;
//	for(i=10;i>1;i--){
//		a=(2+a)*2;
//	}
//	printf("第一天共摘了%d个桃子\n",a);
//	return 0;
//}
