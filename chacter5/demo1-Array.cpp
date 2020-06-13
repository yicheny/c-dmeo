#include <stdio.h>

int main(void){
	int array[10];//声明数组时，元素个数必须是常量
	
	for(int i=0;i<10;i++)
		array[i] = (i+1)*(i+1);
	
	for(int i=0;i<10;i++)
		printf("No.%d: %d\n",i+1,array[i]);
	
	return (0);
} 
