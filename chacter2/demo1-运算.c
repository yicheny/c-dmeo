#include <stdio.h>

int main(void){
	int x,y;
	
	puts("请输入两个整数");
	printf("请输入整数x:");scanf("%d",&x); 
	printf("请输入整数y:");scanf("%d",&y);
	
	printf("x + y = %d\n",x + y); 
	printf("x - y = %d\n",x - y); 
	printf("x * y = %d\n",x * y); 
	printf("x / y = %d\n",x / y); 
	printf("x %% y = %d\n",x % y); 
	printf("x除以y得%d余%d", x/y , x%y); 
	
	return (0); 
} 
