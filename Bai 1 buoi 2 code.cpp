#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("\nNhap mot so tu ban phim : ");
	scanf("%d",&n);
	
	if(n>=2){
		if(n<=7){
			printf("Ngay thu : %d",n);
		}
		else{
		    if(n==8){
		    	printf("Ngay chu nhat");
		    }
			else{
		    	printf("Khong phai cac ngay trong tuan");
			}
		} 
	}
	else{
		printf("khong phai cac ngay trong tuan"); 	
	}
}
