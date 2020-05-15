#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	} while(n<0);
	int sum=0;
	if(n==0){
	    printf("Tong cac chu so cua so vua nhap la %d",0);
		}
	else{
		
	while(n>0){
		int r=n%10;
		n=n/10;
		if(r>=0){
		sum+=r;
		}
	}
	printf("Tong cac chu so cua so vua nhap la %d",sum);
	}
}
