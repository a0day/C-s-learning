#include <iostream>
using namespace std;

//常量定义方法：第一次赋值后不可再修改
//1.#define 宏常量   后面不用；在main上方
//2.const 修饰的变量 后面要； 在main里

#define Day 7


int main() {
	
	cout << "一周有" << Day  <<  "天 " << endl ;
	
	const int month = 12;

	cout << "一年有" << month << "个月份 " << endl;

	
	system("pause");

	return 0;
}