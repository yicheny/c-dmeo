#include <stdio.h>

int main(void){
	
	int a = 1.2;//��ֵ���ʽ���ж��������ȡ���ڱ�����������ͣ�����˵��ֵ��������ı������������ͣ� 
	a = 3.4;
	a = a + 1.4; 
	printf("a��%d\n",a);
//	printf("%05.1f",a);//0.0
	
	
//	int b = c = 2.33;//����������error
	int b = 2.33, c = 3.44; 
	printf("b��%d\n",b);//2
	printf("c��%d\n",c);//3
	
	
	int d;
	double e;
	d = e = 6.6234;
	printf("d��%d,\n",d);//6 
	printf("e��%f,\n",e);//6.623400
	
	
	//ע��۲�����ĸ�ֵ˳��6.6234��ֵ��fʱ��f��ֵ��6��f��ֵ�ٱ���ֵ��g����ʱg��ֵ��6.000000 
	int f;
	double g;
	g = f = 6.6234; 
	printf("f��%d,\n",f);//6
	printf("g��%f,\n",g);//6.000000
	return (0);
}
