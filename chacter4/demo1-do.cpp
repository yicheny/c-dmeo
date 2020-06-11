#include <stdio.h>

int main(void){
	int flag;
	
	do{
		int num;
		printf("输入一个整数："); scanf("%d",&num);
		
		if(num%2==0){
			puts("这个数是偶数"); 
		}else{
			puts("这个数是奇数"); 
		}
		
		printf("是否再进行一次检测？【yes---0,no---9】");
		scanf("%d",&flag); 
	}while(!flag);//符合条件时会继续执行do的内容，这里相当于flag==0 

	//!逻辑非运算符，当值为0返回1，当值不为0返回0	
	return (0); 
} 
