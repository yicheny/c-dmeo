#include <stdio.h>

//����x��n����
double power(double x,int n){
	double temp = 1.0;
	
	while(n-->0) //ע�⣬����ʵ�����βδ���ֵ���ݣ����ݺ���βν����޸ģ�����Ӱ�쵽ʵ�Ρ�����������һ�㣬���Լ��ٱ���������ʹ��������� 
		temp *= x;
	
	return (temp);
} 

int main(void){
	double x;
	int n;
	
	x = 9.0;
	n = 3;
	
	printf("ʵ��%.2f��%d�����ǣ�%-6.2f",x,n,power(x,n));
	
	return (0);
}
