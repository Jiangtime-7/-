#include<stdio.h>
int main(){
	int a[10], i, j, t;
	printf("������10������\n"); 
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
	printf("�ź����\n"); 
	for(i=0;i<10;i++){
		printf("%-2d",a[i]);
	}
	return 0;
}
