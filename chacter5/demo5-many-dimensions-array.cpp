#include <stdio.h>

int main(void){
	int i,j;
	int ma[2][3] = {{1,2,3},{4,5,6}};
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("ma[%d][%d]：%d\n",i,j,ma[i][j]);		
		} 
	} 
	puts("\n");
	
	
	int mb[2][3] = {};
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("mb[%d][%d]：%d\n",i,j,mb[i][j]);		
		} 
	}
	puts("\n");
	
	
	//其他声明多维数组的形式
//	int mc[][3] = {{1,2,3},{4,5,6}};//有效
//	int mc[2][3] = {1,2,3,4,5,6};//明确定义初始值时，内部大括号可以省略
//	int mc[2][3] = {1,2,3,4,5};//同普通数组一样，初始值不足的时候会自动用0不足 
	int mc[2][3] = {{1,2},{4}};//等同下一 
//	int mc[2][3] = {{1,2,0},{4,0,0}};、

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("mc[%d][%d]：%d\n",i,j,mc[i][j]);		
		} 
	} 
	 
	return (0);
}
