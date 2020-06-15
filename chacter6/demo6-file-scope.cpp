#include <stdio.h>

int x = 10;//文件作用域 

//printf("main函数作用域访问x：%d\n",x);//error 

void alert(void){
	extern int x;
	x+=2; 
	printf("alert打印数字x：%d\n",x);
} 

//这种定义返回类型，参数个数及类型的被称作函数原型声明 
//推荐的做法是不要将函数原型声明和函数定义分离，将函数定义在被调用函数之前 
void alert2(void);//注意，在main执行前声明函数类型，即可将函数定义在main函数之后 

int main(void){
//	int x = 33;//使用extern的情况下，这一行会报错 

	//使用extern的声明被称作非定义声明，区别在于不会创建变量的实体 
	extern int x;//这一行表示的是使用的是某处声明的变量x，当然不写这一行同样可以使用文件作用域的 x; 
	x+=1; 
	printf("main函数作用域访问x：%d\n",x);
	alert();
	alert2();
	
	return (0);
} 

//这里会报错，函数定义必须在使用前 
//void alert(void){
//	printf("alert打印数字x：%d",x);
//}

//用于定义实体的称作函数定义 
void alert2(void){
	extern int x;
	x+=3; 
	printf("alert2打印数字x：%d",x);
}
