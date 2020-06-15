#include <stdio.h>

int main(void){
	const int x = 1;
//	x = 10;//error²»¿ÉÐÞ¸Ä 
	printf("%d\n",x);
	
	const int array[3] = {1,2,3};
//	array[0] = 4;//error
	printf("%d",array[0]); 
	 
	return (0);
} 
