#include <stdio.h>

//demo6-prime-number

//�������ڴ���1�������У�����1���������޷���������Ȼ����������
//int���ͷ�Χ��-32767 ~ 32767
//unsigned long���ͣ�c�����б�ʾ��Χ���ķǸ��������ͣ����������ʱʹ�õ�ת����"%lu"

//����1000���ڵ����� 

int main(void){
	int a,b;
	unsigned long counter = 0;
	
	//�㷨1-78022 
//	for(a=2;a<=1000;a++){
//		for(b=2;b<a;b++){
//			counter++;
//			if(a%b==0) break;		
//		}
//		
//		if(a==b) printf("%d\n",a);
//	}


	//�㷨2-77523 
//	a=2;
//	printf("%d\n",a++);
//	
//	for(;a<=1000;a+=2){
//		for(b=2;b<a;b++){
//			counter++;
//			if(a%b==0) break;
//		}
//		
//		if(a==b) printf("%d\n",a);
//	} 
	
	
	//�㷨3-38678 
//	a=2;
//	printf("%d\n",a++);
//	
//	for(;a<=1000;a+=2){
//		for(b=3;b<a;b+=2){
//			counter++;
//			if(a%b==0) break;
//		}
//		
//		if(a==b) printf("%d\n",a);
//	} 


	//�㷨4-14622 
//	int prime[500];
//	int ptr = 0;
//	
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//	
//	for(a=5;a<=1000;a+=2){
//		//ע�����ѭ��������ֻ��Ҫ�ж�ĳ���Ƿ���Ա����е������������� 
//		for(b=1;b<ptr;b++){
//			counter++;
//			if(a%prime[b] == 0) break; 
//		}
//		
//		if(ptr==b) prime[ptr++] = a;                                 
//	} 
//	
//	for(a=0;a<ptr;a++){
//		printf("%d\n",prime[a]);
//	}


	//�㷨5-3774 
	//�۲�100��Լ��
	//2 * 50
	//4 * 25
	//5 * 20
	//10 * 10
	//20 * 5
	//25 * 4
	//50 * 2
	//����100�ǳ����ε������Լ���ǳ����εĳ��Ϳ���ôһ�������Ա�����������ͬ�����Ա�������������20��5
	//�ɴ˵ó�һ�����ۣ����a�޷���С�ڵ���a��ƽ������������������ô���������� 
	int prime[500];
	int ptr = 0;
	
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	
	for(a=5;a<=1000;a+=2){
		int flag=0; 
		
		//ע�����ѭ�����޷���С�ڵ���a��ƽ������������������ 
		//��������� x,y ˳�ζ�x,y�������㣬����y�ļ�������Ϊ�������ʽ��ֵ 
		for(b=1;counter++,prime[b]*prime[b]<=a;b++){
			counter++;
			if(a%prime[b] == 0) {
				flag=1;
				break; 
			}
		}
		
		if(!flag) prime[ptr++] = a;                                 
	} 
	
	for(a=0;a<ptr;a++){
		printf("%d\n",prime[a]);
	}
	
		
	puts("�˳�ִ�еĴ�����"); 
	printf("%lu",counter); 
	
	return (0);
} 
