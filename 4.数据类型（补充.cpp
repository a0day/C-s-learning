#include  <iostream>
using namespace  std;

int main()
{
	{
		cout << "sizeof()" << endl;
		/*sizeof()*/
		// sizeof (��������/����) �����������ռ�õĿռ��С
		// ��������ִ����ֽ���
		short a = 10;
		cout << "������ռ�õ��ֽ���Ϊ��" << sizeof(a) << endl;


	}

	{
		cout << "������" << endl;
		//1.������ float
		//	// float ռ4���ֽ�
		//	float f = 3.14f; // f��ʾ������
		// 3.14 Ĭ����˫����,����Ҫ��f������Ҫ��תһ��
		float d1 = 3.1415926f;
		cout << d1 << endl; // 3.14159

		//2.˫���� double
		//	// double ռ8���ֽ�
		//	double d = 3.14; // Ĭ����˫����
		double d2 = 3.1415926;
		cout << d2 << endl; // 3.14159

		//3.��չ���� long double
		//	// long double ռ10���ֽ�
		//	long double ld = 3.14; // Ĭ����˫����
		double d3 = 3.1415926;
		cout << d3 << endl; // 3.14159
		// 1 2 3 ��Ĭ�ϱ���7λ��Ч����, ������������

		// 4.��ѧ������
		// 3.14e2 ==3.14*10^2��3.14e-2 ==3.14*10^-2

	}
	{
		cout << "�ַ���char" << endl;
		char ch = 'A'; // �ַ������õ�����������
		cout << ch << endl; // A
		cout << (int)ch << endl; //ǿת���ASCII�� 65
		// ת���ַ�  \n ���У� \t ˮƽ�Ʊ� \\��б��
		cout << "hello \n world" << endl;
		cout << "\\" << endl; // ���һ����б��
		cout << "111111\thello" << endl; // 111	hello
		cout << "1\tworld" << endl; // world �� hello ����

	}
	{
		cout << "�ַ��� string" << endl;
		string str = "hello world";
		cout << str << endl;

	}
	double a = (double) 4 /5;
	cout << a << endl; 
	
	

	return 0;
}