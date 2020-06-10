#include <stdio.h>

int main(void){
	int x;
	
	printf("请输入月份："); scanf("%d",&x);
	
	if(x>=3 && x<=5)
		puts("是春天");
	else if(x>=6 && x<=8)
		puts("是夏天");
	else if(x>=9 && x<=11)
		puts("是秋天"); 
	else if(x==1 || x==2 || x==12)
		puts("是冬天");
	else
		puts("输入的月份不存在!"); 
	
	return (0);
} 
