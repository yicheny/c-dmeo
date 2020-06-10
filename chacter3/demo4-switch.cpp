#include <stdio.h>

int main(void){
	int x;
		
	printf("请输入任意整数："); scanf("%d",&x);
	
	switch(x){ 
		case 0: puts("A"); break;
		case 1: puts("B"); break;
		case 2: puts("C"); break;
		default: puts("D-默认值"); break; 
	}
	
	return (0);
} 
