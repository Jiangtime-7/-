#include<stdio.h>
#include<math.h>
int main(){
	int i, t;
	printf("ˮ�ɻ�����:\n");
	for(i=100;i<1000;i++){
	    t=(i/100)*(i/100)*(i/100)+(i%100/10)*(i%100/10)*(i%100/10)+(i%100%10)*(i%100%10)*(i%100%10);
	    if(i==t){
		   printf("%d\n",i);
	    }
    }
  return 0;
}
