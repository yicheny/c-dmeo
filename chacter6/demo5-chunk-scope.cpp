#include <stdio.h>

//赋给变量的标识符，它的名称有个通用范围，这个范围被叫做作用域(scope)
//块作用域：复合语句和函数定义的变量，仅在该作用域中可以使用，其他区域无效【具体来说是从声明变量开始，到该声明程序块最后的}为止】 

int main(void){
	int dv = 1;
	
	for (int i=0;i<10;i++){
		int dv = 10;
	}
	
//	printf("%d",dv);//error
	
	return (0);
} 
