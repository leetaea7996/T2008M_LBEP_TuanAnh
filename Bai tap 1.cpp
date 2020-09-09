#include <stdio.h>
int main(){
	int num;
	printf("Nhap num=");
	scanf("%d",&num);
	int r;
	r= num%2;
	if(r==0){
		// Dung
		printf("%d so chan",num);
	}
	else{
		// Sai
		printf("%d so le",num);
	}
		
}
