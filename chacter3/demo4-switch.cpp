#include <stdio.h>

//ͨ����һ���ʽ���Ƴ������̷�֧ʱ��ʹ��switchͨ����ifЧ������ 
int main(void){
	int x;
		
	printf("����������������"); scanf("%d",&x);
	
	switch(x){ 
		case 0: puts("A"); break;
		case 1: puts("B"); break;
		case 2: puts("C"); break;
		default: puts("D-Ĭ��ֵ"); break; 
	}
	
	return (0);
} 
