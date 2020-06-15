#include <stdio.h>

//返回x的n次幂
double power(double x,int n){
	double temp = 1.0;
	
	while(n-->0) //注意，因函数实参与形参存在值传递，传递后对形参进行修改，不会影响到实参。合理利用这一点，可以减少变量声明，使代码更紧凑 
		temp *= x;
	
	return (temp);
} 

int main(void){
	double x;
	int n;
	
	x = 9.0;
	n = 3;
	
	printf("实数%.2f的%d次幂是：%-6.2f",x,n,power(x,n));
	
	return (0);
}
