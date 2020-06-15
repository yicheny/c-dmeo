#include <stdio.h>

//返回两数中较大的值
int maxof(int x,int y){
	return x>y ? x : y;
} 

int main(){
	int a = 111;
	int b = 212;
	
	printf("%d",maxof(a,b));
	return (0);
} 
