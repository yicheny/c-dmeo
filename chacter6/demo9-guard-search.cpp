#include <stdio.h>

#define NUMBER 5
#define FAILED -1 

//关于顺序查找法
//顺序查找法每次循环需要两种判断
//1. 是否找到目标值，找到则跳出循环
//2. 是否遍历数组所有项，没有找到目标值但是数组项已经遍历完了，跳出循环
//判断很简单，但是多次循环下依旧是不小的负担
//使用哨兵查找法可以简化判断

//查找元素数为no的数组vc中与key相同的元素 
int search(int vc[],int key,int no){
	int i = 0;
	vc[no] = key;
	
//	while(1){
//		if(vc[i]==key) break;
//		i++; 
//	}

	//等同于while语句 
	for(;vc[i]!=key;i++);
	
	return (i==no ? FAILED : i);
} 

int main(void){
	int i,ky,idx;
	int vx[NUMBER];
	
	for(i=0;i<NUMBER;i++){
		printf("vc[%d]：",i);
		scanf("%d",&vx[i]);
	}
	
	printf("请输入需要查找的值：");scanf("%d",&ky);
	
	idx = search(vx,ky,NUMBER);
	
	if(idx==FAILED) printf("查找失败");
	else printf("%d是数组的第%d号元素",ky,idx+1); 
	return (0);
} 
