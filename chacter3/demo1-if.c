#include <stdio.h>

int main(void){
	int x;
	printf("请输入任意整数：");
	scanf("%d",&x);
	
	if(x % 5)
		printf("该数值不可被5整除"); 
	else
		printf("该数值可以被5整除"); 
	
	return (0);
} 
