#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	} while(n<0);
	int count=0;
	if(n==0){
	    printf("%d co mot chu so",n);
		}
	else{
		
	while(n>0){
		int r=n%10;
		n=n/10;
		if(r>=0){
		count++;
		}
	}
	printf("So chu so cua n la %d",count);
	return 0;
	}
}
