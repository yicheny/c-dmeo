#include <stdio.h>

int main(void){
	int x;
	
	printf("请输入任意数字：\n");
	scanf("%d",&x);//注意，必须加上&符号才能读取到变量值 
	
	printf("您输入的数字是：%d",x);
	
	return (0);
} 
