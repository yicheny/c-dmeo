#include <stdio.h>

int main(void){
	int a,b,c;
	int sum;
	double ave;
	
	a = 1;
	b = 2;
	c = 5;
	
	sum = a+b+c;
	ave = (double)sum/3;//(类型)是类型转换运算符，可以将数值转换成对应的类型 
	
	printf("a,b,c之和为[%7d]\n",sum);//至少显示7位整数 
	printf("a,b,c之和为[%07d]\n",sum);//设置0标志后，如果数值前面有空余位，则用0补齐【默认是空白】 
	printf("a,b,c平均值为[%7.1f]\n",ave);//至少显示7位浮点数，但是小数点后只显示1位 
	printf("a,b,c平均值为[%-7.1f]\n",ave);//设置-会左对齐显示【默认右对齐】 
	
	return (0);
} 
