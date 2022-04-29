#include <iostream>
using namespace std;

//std::string global_str;
//int global_int;

int main()
{


//	练习 2.18
//		编写代码分别改变指针的值以及指针所指对象的值。
	/*int a = 0, b = 0;
	int* pr = nullptr, * pr0 = nullptr;
	a = 10;
	pr = &a;
	cout << "a = " << a << " pr = " << pr << endl;
	*pr = 20;
	cout << "a = " << a << " pr = " << pr << endl;
	pr0 = &b;
	pr = pr0;
	cout << "pr = " << pr << " pr0 = " << pr0 << endl;*/

//	练习 2.10
//		下列变量的初值分别是什么？
	/*int local_int;
	std::string local_str;

	std::cout << global_str << std::endl;
	std::cout << global_int << std::endl;
	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;*/

/*
 * string类构造函数初始化的空字符串
 * 全局变量自动初始化为0
 * 局部变量未定义
 * string类构造函数初始化的空字符串
 */

//	2.8 练习
//		请利用转义序列编写一段程序，要求先输出 2M，然后转到新一行。
//	    修改程序使其先输出 2，然后输出制表符，再输出 M，最后转到新一行。
	/*std::cout << 2 << "\115\012";
	std::cout << 2 << "\011\115\012";*/

//	练习 2.3
//		读程序写结果。
	//unsigned u = 10, u2 = 42;
	//std::cout << u2 - u << std::endl;   //32
	//std::cout << u - u2 << std::endl;   //-32  2^32-32=4,294,967,264
	//int i = 10, i2 = 42;
	//std::cout << i2 - i << std::endl;   //32
	//std::cout << i - i2 << std::endl;   //-32 
	//std::cout << i - u << std::endl;    //0
	//std::cout << u - i << std::endl;    //0

	return 0;
}