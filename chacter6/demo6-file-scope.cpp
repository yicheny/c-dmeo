#include <stdio.h>

int x = 10;//�ļ������� 

//printf("main�������������x��%d\n",x);//error 

void alert(void){
	extern int x;
	x+=2; 
	printf("alert��ӡ����x��%d\n",x);
} 

//���ֶ��巵�����ͣ��������������͵ı���������ԭ������ 
//�Ƽ��������ǲ�Ҫ������ԭ�������ͺ���������룬�����������ڱ����ú���֮ǰ 
void alert2(void);//ע�⣬��mainִ��ǰ�����������ͣ����ɽ�����������main����֮�� 

int main(void){
//	int x = 33;//ʹ��extern������£���һ�лᱨ�� 

	//ʹ��extern�������������Ƕ����������������ڲ��ᴴ��������ʵ�� 
	extern int x;//��һ�б�ʾ����ʹ�õ���ĳ�������ı���x����Ȼ��д��һ��ͬ������ʹ���ļ�������� x; 
	x+=1; 
	printf("main�������������x��%d\n",x);
	alert();
	alert2();
	
	return (0);
} 

//����ᱨ���������������ʹ��ǰ 
//void alert(void){
//	printf("alert��ӡ����x��%d",x);
//}

//���ڶ���ʵ��ĳ����������� 
void alert2(void){
	extern int x;
	x+=3; 
	printf("alert2��ӡ����x��%d",x);
}
