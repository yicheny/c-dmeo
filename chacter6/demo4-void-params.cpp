#include <stdio.h>

//返回输入的非负整数 
int scan_uint(void){ //注意：形参可以为空 
	int temp;
	
	do{
		printf("请输入一个非负整数：");	
		scanf("%d",&temp);
		if(temp<0) puts("请不要输入负整数！"); 
	}while(temp<0);
	
	return (temp);
}


int main(void){
	
	printf("%d",scan_uint());	 
	
	return (0);
}
