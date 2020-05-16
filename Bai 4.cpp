#include<stdio.h>
int main(){
    int a,b;
    do{

	    printf("Nhap so a nguyen  \n");
    	scanf("%d",&a);
    	printf("Nhap so b nguyen \n");
    	scanf("%d",&b);
    } while (a==0 or b==0);    	
   
    while(a!=b){
    	if(a<0){
		a=-a;
		}
    	if(b<0){
		b=-b;
		}
    	if(a>b){
    		a=a-b;
		}
    	else{
		b=b-a;
		}	
	}
	printf("Uoc chung lon nhat cua hai so vua nhap la %d",a);
	}		
	
	

