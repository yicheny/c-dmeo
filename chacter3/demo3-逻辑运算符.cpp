#include <stdio.h>

int main(void){
	int x;
	
	printf("�������·ݣ�"); scanf("%d",&x);
	
	if(x>=3 && x<=5)
		puts("�Ǵ���");
	else if(x>=6 && x<=8)
		puts("������");
	else if(x>=9 && x<=11)
		puts("������"); 
	else if(x==1 || x==2 || x==12)
		puts("�Ƕ���");
	else
		puts("������·ݲ�����!"); 
	
	return (0);
} 
