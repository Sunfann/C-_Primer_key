#include <iostream>
using namespace std;

//std::string global_str;
//int global_int;

int main()
{


//	��ϰ 2.18
//		��д����ֱ�ı�ָ���ֵ�Լ�ָ����ָ�����ֵ��
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

//	��ϰ 2.10
//		���б����ĳ�ֵ�ֱ���ʲô��
	/*int local_int;
	std::string local_str;

	std::cout << global_str << std::endl;
	std::cout << global_int << std::endl;
	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;*/

/*
 * string�๹�캯����ʼ���Ŀ��ַ���
 * ȫ�ֱ����Զ���ʼ��Ϊ0
 * �ֲ�����δ����
 * string�๹�캯����ʼ���Ŀ��ַ���
 */

//	2.8 ��ϰ
//		������ת�����б�дһ�γ���Ҫ������� 2M��Ȼ��ת����һ�С�
//	    �޸ĳ���ʹ������� 2��Ȼ������Ʊ��������� M�����ת����һ�С�
	/*std::cout << 2 << "\115\012";
	std::cout << 2 << "\011\115\012";*/

//	��ϰ 2.3
//		������д�����
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