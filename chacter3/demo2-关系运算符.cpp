#include <stdio.h>

//==	
//!=	
//>	
//<	
//>=
//<=

int main(void){
	int a,b,c,max;
	
	puts("请输入三个整数");
	printf("请输入整数a："); scanf("%d",&a); 
	printf("请输入整数b："); scanf("%d",&b); 
	printf("请输入整数c："); scanf("%d",&c); 
	
	max = a;
	
	if(b>max) max = b;
	if(c>max) max = c;
	
	printf("a、b、c最大值为%d",max);
	return (0);
}
