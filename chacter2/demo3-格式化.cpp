#include <stdio.h>

int main(void){
	int a,b,c;
	int sum;
	double ave;
	
	a = 1;
	b = 2;
	c = 5;
	
	sum = a+b+c;
	ave = (double)sum/3;//(����)������ת������������Խ���ֵת���ɶ�Ӧ������ 
	
	printf("a,b,c֮��Ϊ[%7d]\n",sum);//������ʾ7λ���� 
	printf("a,b,c֮��Ϊ[%07d]\n",sum);//����0��־�������ֵǰ���п���λ������0���롾Ĭ���ǿհס� 
	printf("a,b,cƽ��ֵΪ[%7.1f]\n",ave);//������ʾ7λ������������С�����ֻ��ʾ1λ 
	printf("a,b,cƽ��ֵΪ[%-7.1f]\n",ave);//����-���������ʾ��Ĭ���Ҷ��롿 
	
	return (0);
} 
