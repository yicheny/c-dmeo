#include <stdio.h>

//����ʹ��ʹ�ú꣬����������һ���ط�ͳһ��������Ҳ��ǿ�˳���Ŀɶ��� 
#define NUMBER 5 //������ 

//ע�⣺����ʽ�겻�������ַ������������ַ������е����ݣ�Ҳ���������滻�������ȱ�ʶ���е����� 
int main(void){
	int array[NUMBER];
	int sum = 0; 
	
	printf("������%d��������\n",NUMBER);
	
	for(int i=0;i<NUMBER;i++){
		printf("No.%d��",i+1); scanf("%d",&array[i]);
		sum += array[i];
	} 
	
	printf("�ܷ֣�%5d\n",sum);
	printf("ƽ���֣�%5.1f\n",(double)sum/NUMBER);
	return (0);
}
