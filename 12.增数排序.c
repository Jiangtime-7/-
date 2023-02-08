#include<stdio.h>
int main(){
	int a[9]={1,2,3,4,5,6,7,8,9}, b[10];
	int i, j, s;
	printf("请输入一个整数\n数组a是{1,2,3,4,5,6,7,8,9}\n按原来排序的规律将它插入数组a中\n");
	scanf("%d",&s);
	for(i=0;i<9;i++){
		if(s>=a[i]&&s<=a[i+1]){
			j=i;
			b[j+1]=s;
			for(i=0;i<=j;i++){
				b[i]=a[i];
			}
			for(i=j+2;i<10;i++){
				b[i]=a[i-1];
			}
		}
		else if(s<=a[0]){
		    b[0]=s;
			for(i=1;i<10;i++){
				b[i]=a[i-1];
			}
		}
		else if(s>=a[8]){
			b[9]=s;
			for(i=0;i<9;i++){
				b[i]=a[i];
			}
		}
	}
	printf("排好序后\n");
	for(i=0;i<10;i++){
		printf("%-2d",b[i]);
	}
	return 0;
}
