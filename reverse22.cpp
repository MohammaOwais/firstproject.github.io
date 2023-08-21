//Swapping first number to last number.
#include<stdio.h>
main(){
	int a;
	printf("Enter a 4-digit numeber...\n");
	scanf("%d",&a);
	int b=a%10;
	int f1=a/1000;//1
	int swap=b*1000;//4000
	swap=swap+(a%1000);
	
	swap=swap-b;
	swap=swap+f1;
	
	printf("Answer is=%d",swap);
	
	
}
