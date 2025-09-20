#include  <iostream>
using namespace  std;

int main()
{
	{
		cout << "sizeof()" << endl;
		/*sizeof()*/
		// sizeof (数据类型/变量) 求出数据类型占用的空间大小
		// 输出的数字代表字节数
		short a = 10;
		cout << "短整型占用的字节数为：" << sizeof(a) << endl;


	}

	{
		cout << "浮点型" << endl;
		//1.单精度 float
		//	// float 占4个字节
		//	float f = 3.14f; // f表示单精度
		// 3.14 默认是双精度,所以要加f以免需要再转一次
		float d1 = 3.1415926f;
		cout << d1 << endl; // 3.14159

		//2.双精度 double
		//	// double 占8个字节
		//	double d = 3.14; // 默认是双精度
		double d2 = 3.1415926;
		cout << d2 << endl; // 3.14159

		//3.扩展精度 long double
		//	// long double 占10个字节
		//	long double ld = 3.14; // 默认是双精度
		double d3 = 3.1415926;
		cout << d3 << endl; // 3.14159
		// 1 2 3 都默认保留7位有效数字, 还有四舍五入

		// 4.科学计数法
		// 3.14e2 ==3.14*10^2；3.14e-2 ==3.14*10^-2

	}
	{
		cout << "字符型char" << endl;
		char ch = 'A'; // 字符常量用单引号括起来
		cout << ch << endl; // A
		cout << (int)ch << endl; //强转获得ASCII码 65
		// 转义字符  \n 换行； \t 水平制表； \\反斜杠
		cout << "hello \n world" << endl;
		cout << "\\" << endl; // 输出一个反斜杠
		cout << "111111\thello" << endl; // 111	hello
		cout << "1\tworld" << endl; // world 与 hello 对齐

	}
	{
		cout << "字符串 string" << endl;
		string str = "hello world";
		cout << str << endl;

	}
	double a = (double) 4 /5;
	cout << a << endl; 
	
	

	return 0;
}