#include<stdio.h>
int main(){
    int a,b;
    do{ printf("Ta quy ve tim UCLN cua hai so nguyen duong la du\n ");
	    printf("Nhap so a nguyen duong \n");
    	scanf("%d",&a);
    	printf("Nhap so b nguyen duong \n");
    	scanf("%d",&b);
    	} while(a<=0||b<=0);
   
    while(a!=b){
    	if(a>b){
    		a=a-b;
		}
    	else{
		b=b-a;
		}	
	}
	printf("Uoc chung lon nhat cua hai so vua nhap la %d",a);
	}		
	
	

