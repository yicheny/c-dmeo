#include <stdio.h>

//��������ķǸ����� 
int scan_uint(void){ //ע�⣺�βο���Ϊ�� 
	int temp;
	
	do{
		printf("������һ���Ǹ�������");	
		scanf("%d",&temp);
		if(temp<0) puts("�벻Ҫ���븺������"); 
	}while(temp<0);
	
	return (temp);
}


int main(void){
	
	printf("%d",scan_uint());	 
	
	return (0);
}
