#include <stdio.h>

//通过单一表达式控制程序流程分支时，使用switch通常比if效果更好 
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
