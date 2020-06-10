#include <stdio.h>

//puts函数可以输出作为实参的字符串，并在结尾换行，也就是说，puts("...") 与printf("...\n")作用基本相同
//在需要换行且不需要格式化的时候，可以使用puts 
 
int main(void){
	int a,b;
	
	puts("请输入两个整数：");
	printf("请输入第一个整数："); scanf("%d",&a); 
	printf("请输入第二个整数："); scanf("%d",&b);
	
	printf("两数之和为：%d",a+b);
	
	return (0);
} 
