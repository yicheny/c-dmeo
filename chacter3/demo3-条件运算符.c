#include <stdio.h>

int main(void){
	int a,b,max;
	
	puts("请输入两个整数：");
	printf("请输入整数a:");scanf("%d",&a); 
	printf("请输入整数b:");scanf("%d",&b); 
	
	max = (a>b) ? a : b;
	
	printf("较大的整数是：%d",max);
	
	return (0);
} 
