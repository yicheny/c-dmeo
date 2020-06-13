#include <stdio.h>

//demo6-prime-number

//质数：在大于1的整数中，除了1和它本身，无法被其他自然数整除的数
//int类型范围：-32767 ~ 32767
//unsigned long类型，c语言中表示范围最广的非负整数类型，输出此类型时使用的转换是"%lu"

//计算1000以内的质数 

int main(void){
	int a,b;
	unsigned long counter = 0;
	
	//算法1-78022 
//	for(a=2;a<=1000;a++){
//		for(b=2;b<a;b++){
//			counter++;
//			if(a%b==0) break;		
//		}
//		
//		if(a==b) printf("%d\n",a);
//	}


	//算法2-77523 
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
	
	
	//算法3-38678 
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


	//算法4-14622 
//	int prime[500];
//	int ptr = 0;
//	
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//	
//	for(a=5;a<=1000;a+=2){
//		//注意这个循环，我们只需要判断某数是否可以被现有的质数整除即可 
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


	//算法5-3774 
	//观察100的约数
	//2 * 50
	//4 * 25
	//5 * 20
	//10 * 10
	//20 * 5
	//25 * 4
	//50 * 2
	//假设100是长方形的面积，约数是长方形的长和宽，那么一个数可以被长整除，则同样可以被宽整除，比如20和5
	//由此得出一个结论：如果a无法被小于等于a的平凡根的质数整除，那么它就是质数 
	int prime[500];
	int ptr = 0;
	
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	
	for(a=5;a<=1000;a+=2){
		int flag=0; 
		
		//注意这个循环，无法被小于等于a的平凡根的质数整除即可 
		//逗号运算符 x,y 顺次对x,y进行运算，并将y的计算结果作为整个表达式的值 
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
	
		
	puts("乘除执行的次数："); 
	printf("%lu",counter); 
	
	return (0);
} 
