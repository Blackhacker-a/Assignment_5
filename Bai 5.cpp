#include<stdio.h>
int main() {
	int n;
	int a1 = 1, a2 = 1;//khoi tao gia tri dau
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
		int a;
		while(a1+a2<n){   
				a = a1 + a2;
				a1 = a2;
				a2 = a;    // khoi tao gia tri cua so hang tu 3 tro di
				}
		printf("So Fibonacci nho hon so vua nhap la %d",a2);//in ra gi� tri truoc so a	la a2	
		}
		
	





