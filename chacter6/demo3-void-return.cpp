#include <stdio.h>

//void��Ϊ�ա�C�����У�������û�з���ֵ������������������һЩ�����У�û�з���ֵ�ᱻ����Ϊ�Ǻ����ĸ�������ӳ���(Fortran)�����(Pascal) 
void put_starts(int n){
	while(n-->0)
		putchar('*');
}

int main(void){
	
	put_starts(10);
	
	return (0);
} 
