#include<stdio.h>
int main(){
	int a,b;
	
	do{
	printf("Nhap vao so nguyen a ");
	scanf("%d",&a);
	
	printf("Nhap vao so nguyen b ");
	scanf("%d",&b);
	} while(a>=b);
	
	int sum;
	for(int i=a;i<=b;i++){
		sum+=i;
		}
    printf("Tong cac so tu a den b la %d",sum);	
	
	return 0;
}
