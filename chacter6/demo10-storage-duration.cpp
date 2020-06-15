#include <stdio.h>

//在函数中声明的变量，并不是在程序运行开始至结束始终存在的
//自动存储期：
//不使用存储类说明符static声明的变量，会被分配自动存储空间，程序执行到声明变量时创建相应对象，函数执行结束时，对象被销毁
//静态存储期：
//使用static声明的变量，在程序执行之前，准确的说在main函数执行之前的准备阶段便被创建出来，在整个程序结束时销毁。
//注意，使用static的变量创建出来时，只分配了存储空间，并没有被赋值 

int fx = 0;

void func(){
	static int sx = 10;
	int ax = 0;
	
	printf("%3d%3d%3d\n",ax++,sx++,fx++) ;
}

int main(void){
	puts(" ax sx fx");
	puts("---------");
	for(int i=0;i<10;i++)
		func();
	puts("---------");	
	
	return (0);
} 
