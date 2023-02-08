#include<stdio.h>
#include<math.h>
int main(){
	double r1=0.015, r2=0.021, r3=0.0275, r4=0.03, R=0.0035, P0=1000, P1, P2, P3, P4, P5, max, t;
	P1=P0*(1+5*r4);P2=P0*(1+2*r2)*(1+3*r3);P3=P0*(1+3*r3)*(1+2*r2);P4=P0*pow(1+r4,5);P5=P0*pow(1+R/4,60);
	if(P1>P2){
		t=P1;
	}
	else t=P2;
		while(P3>t)t=P3;
	if(P4>P5){
		max=P4;
	}
	else max=P5;
	    while(t>max)max=t;
	printf("方案一本息和是%f元\n方案二本息和是%f元\n方案三本息和是%f元\n方案四本息和是%f元\n方案五本息和是%f元\n",P1, P2, P3, P4, P5);
	printf("这几种方案中最划算的是%f元",max);
	return 0;
}
