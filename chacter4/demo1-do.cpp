#include <stdio.h>

int main(void){
	int flag;
	
	do{
		int num;
		printf("����һ��������"); scanf("%d",&num);
		
		if(num%2==0){
			puts("�������ż��"); 
		}else{
			puts("�����������"); 
		}
		
		printf("�Ƿ��ٽ���һ�μ�⣿��yes---0,no---9��");
		scanf("%d",&flag); 
	}while(!flag);//��������ʱ�����ִ��do�����ݣ������൱��flag==0 

	//!�߼������������ֵΪ0����1����ֵ��Ϊ0����0	
	return (0); 
} 
