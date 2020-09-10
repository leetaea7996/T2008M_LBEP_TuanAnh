#include <stdio.h>
#include <math.h>

 int main(){
 	
 	float a,b,x1,x2;
	printf("Nhap a = ");
 	scanf("%f",&a);
 	
 	printf("Nhap b = ");
 	scanf("%f",&b);
 	
 	if(a>=b){
 		if(b!=0){
			x1= a/b;
			printf("Ket qua : a / b = %f",x1);		
		}
			
		else{
			printf("Khong the thuc hien phep tinh.");
		}
	}
		
		else{
		 	x2= a*b;
	 		printf("Ket qua : a * b = %f",x2);
		}
 } 
