#include <stdio.h>

//void意为空。C语言中，无论有没有返回值都叫做函数，在其他一些语言中，没有返回值会被定义为非函数的概念，比如子程序(Fortran)或进程(Pascal) 
void put_starts(int n){
	while(n-->0)
		putchar('*');
}

int main(void){
	
	put_starts(10);
	
	return (0);
} 
