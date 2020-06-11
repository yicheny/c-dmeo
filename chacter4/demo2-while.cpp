#include <stdio.h>

int main(void){
	int x;
	printf("请输入一个整数："); scanf("%d",&x);
	
	while(x>0){
		x--;
		printf("%d ",x);
	}

	putchar('abcd');//putchar仅用于显示字符常量【被单引号包裹的字符】，如果有多个字符，则只会显示最后一位，比如这里就是d 
	//注意：字符常量是int类型 
		
	return (0);
} 
