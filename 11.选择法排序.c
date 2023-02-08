#include<stdio.h>
int main(){
	int a[10], i, j, t;
	printf("请输入10个整数\n"); 
	for(i=0;i<10;i++){
	 scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=9;j>i;j--){
			if(a[j]<a[i]){
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	printf("排好序后\n"); 
	for(i=0;i<10;i++){
		printf("%-2d",a[i]);
	}
	return 0;
}
