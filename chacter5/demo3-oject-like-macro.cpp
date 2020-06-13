#include <stdio.h>

//合理使用使用宏，不仅可以在一个地方统一管理，而且也增强了程序的可读性 
#define NUMBER 5 //宏名称 

//注意：对象式宏不能用来字符串字面量和字符常量中的内容，也不能用于替换变量名等标识符中的内容 
int main(void){
	int array[NUMBER];
	int sum = 0; 
	
	printf("请输入%d个整数：\n",NUMBER);
	
	for(int i=0;i<NUMBER;i++){
		printf("No.%d：",i+1); scanf("%d",&array[i]);
		sum += array[i];
	} 
	
	printf("总分：%5d\n",sum);
	printf("平均分：%5.1f\n",(double)sum/NUMBER);
	return (0);
}
