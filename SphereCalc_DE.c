#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


int main(){
	double r=0.0,d=0.0,u=0.0,a=0.0,o=0.0,v=0.0;
	int ein=0;
	
	while(ein<1 || ein>6){
	printf("Gegebenen wert zur Kugelberechnung auswaelen\n");
	printf("Radius\t\t(1)\n");
	printf("Durchmesser\t(2)\n");
	printf("Umfang\t\t(3)\n");
	printf("Kreisfaeche\t(4)\n");
	printf("Oberflaeche\t(5)\n");
	printf("Volumen\t\t(6)\n\n");
	
	printf("Auswahl\t:\t ");
	scanf("%i",&ein);
	}
	
	printf("\n");
	
	if(ein==1){
		printf("Radius\neingeben:\t ");
		scanf("%lf",&r);
	}
	else if(ein==2){
		printf("Durchmesser\neingeben:\t ");
		scanf("%lf",&d);
		r=d/2.0;
	}
	else if(ein==3){
		printf("Umfang\neingeben:\t ");		
		scanf("%lf",&u);
		r=u/(2.0*M_PI);
	}
	else if(ein==4){
		printf("Kreisfaeche\neingeben:\t ");
		scanf("%lf",&a);
		r=pow(a/M_PI,0.5);
	}
	else if(ein==5){
		printf("Oberflaeche\neingeben:\t ");
		scanf("%lf",&o);
		r=pow(o/(4.0*M_PI),0.5);
	}
	else if(ein==6){
		printf("Volumen\neingeben:\t ");
		scanf("%lf",&v);
		r=pow((3.0*v)/(4.0*M_PI),1.0/3.0);
	}
	
	d=2*r;
	u=2*M_PI*r;
	a=M_PI*pow(r,2);
	o=4*M_PI*pow(r,2);
	v=(4.0/3.0)*M_PI*pow(r,3);
	
	printf("\n");
	printf("Radius\t\t = %3.3lf",r);
	printf("\n");
	printf("Durchmesser\t = %3.3lf",d);
	printf("\n");
	printf("Umfang\t\t = %3.3lf",u);
	printf("\n");
	printf("Kreisflaeche\t = %3.3lf",a);
	printf("\n");
	printf("Oberflaeche\t = %3.3lf",o);
	printf("\n");
	printf("Volumen\t\t = %3.3lf",v);
	
	return 0;
}