#include <stdio.h>

#define NUMBER 5
#define FAILED -1 

//����˳����ҷ�
//˳����ҷ�ÿ��ѭ����Ҫ�����ж�
//1. �Ƿ��ҵ�Ŀ��ֵ���ҵ�������ѭ��
//2. �Ƿ�������������û���ҵ�Ŀ��ֵ�����������Ѿ��������ˣ�����ѭ��
//�жϺܼ򵥣����Ƕ��ѭ���������ǲ�С�ĸ���
//ʹ���ڱ����ҷ����Լ��ж�

//����Ԫ����Ϊno������vc����key��ͬ��Ԫ�� 
int search(int vc[],int key,int no){
	int i = 0;
	vc[no] = key;
	
//	while(1){
//		if(vc[i]==key) break;
//		i++; 
//	}

	//��ͬ��while��� 
	for(;vc[i]!=key;i++);
	
	return (i==no ? FAILED : i);
} 

int main(void){
	int i,ky,idx;
	int vx[NUMBER];
	
	for(i=0;i<NUMBER;i++){
		printf("vc[%d]��",i);
		scanf("%d",&vx[i]);
	}
	
	printf("��������Ҫ���ҵ�ֵ��");scanf("%d",&ky);
	
	idx = search(vx,ky,NUMBER);
	
	if(idx==FAILED) printf("����ʧ��");
	else printf("%d������ĵ�%d��Ԫ��",ky,idx+1); 
	return (0);
} 
