#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
//	1.20
	//在网站http://www.informit.com/title/0321714113 上，
	//第1章的代码目录汇总包含了头文件Sales_item.h。
	//将它拷贝到你自己的工作目录中。用它编写一个程序，
	//读取一组书籍销售记录，将每条记录打印到标准输出上。
	Sales_item book;
	cout << "请输入销售记录：";
	while (cin >> book)
	cout << "ISBN、销售额和平均售价为 " << book << endl;


//1.18
//  编译并运行本节的程序，给它输入全都相等的值。再次运行程序，输入没有重复的值。
	//int a = 0;
	//int b = 0;
	//if (cin >> a)
	//{
	//	int cut = 1;
	//	while (cin >> b)
	//	{
	//		if (a == b)
	//		{
	//			++cut;
	//		}
	//		else
	//		{
	//			cout << a << "连续重复个数为：" << cut << "个" << endl;
	//			cut = 0;
	//			a = b;
	//		}
	//	}
	//	cout << a << "连续重复个数为：" << cut << "个" << endl;
	//}

//1.16
//	编写程序，从cin读取一组数，输出其和。
	//int i = 0;
	//int sum = 0;

	//while (cin >> i)
	//{
	//	sum += i;
	//}
	//cout <<"sum is "<< sum << endl;

//1.12
//	下面的for循环完成了什么功能？sum的终值是多少？
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i)
	//	sum += i;
	//cout << sum << endl;

//1.11
//	编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
	/*int a = 0;
	int b = 0;
	cout << "输入两个整数：";
	cin >> a >> b;
	if (a > b)
	{
		int t = 0;
		t = a;
		a = b;
		b = t;
	}
	while (a <= b)
	{
		cout << a << " ";
		++a;
	}*/


//1.10   除了++运算符将运算对象的值增加1以外，还有一个递减运算符（--）实现将值减少1。
	//   编写程序，使用递减运算符在循环中按递减序打印出10到0之间的整数。
	//int a = 10;

	//while (a >= 0)
	//{
	//	cout << a << endl;
	//	--a;
	//}


//1.9    编写程序，使用while循环将50到100的整数相加。
	//int a = 50;
	//int cut = 0;

	//while (a <= 100)
	//{
	//	cut += a;
	//	++a;
	//}
	//cout << "sum is " << cut << endl;

//1.8
	//std::cout << "/*";
	//std::cout << "*/";
	//std::cout << /* "*/" */;
	//std::cout << /* "*/" /* "/*" */;

//1.7
	/*
	* 注释对/* 不能嵌套
	* “不能嵌套”几个字会被认为是源码，像剩余程序一样处理
	* /
	
//1.6
	/*int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The sum of " << v1;
	cout<< "and " << v2;
	cout<< " is " << v1 + v2 << std::endl;*/

//1.5
	/*int a = 0;
	int b = 0;

	cout << "please enter two number:";
	cin >> a;
	cin >> b;
	cout << "the sum of ";
	cout << a;
	cout << " and ";
	cout << b;
	cout << " is ";
	cout << a + b;
	cout << endl;
	cout << "the multiply of ";
	cout << a;
	cout << " and ";
	cout << b;
	cout << " is ";
	cout << a * b;
	cout << endl;*/

//1.4
	/*int a = 0, b = 0;
	cout << "please enter two number:";
	cin >> a >> b;
	cout << "the sum of " << a << " and " << b << " is " << a + b << endl;
	cout << "the multiply of " << a << " and " << b << " is " << a * b << endl;*/

//1.3
	/*char arr[10] = { 0 };
	char arr0[10] = { 0 };
	char arr1[] = "hello, world";
	cin >> arr;
	cin >> arr0;
	cout << arr << " " << arr0 << endl;
	cout << arr1 << endl;*/

	return 0;
}
