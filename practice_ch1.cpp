#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
//	1.20
	//����վhttp://www.informit.com/title/0321714113 �ϣ�
	//��1�µĴ���Ŀ¼���ܰ�����ͷ�ļ�Sales_item.h��
	//�������������Լ��Ĺ���Ŀ¼�С�������дһ������
	//��ȡһ���鼮���ۼ�¼����ÿ����¼��ӡ����׼����ϡ�
	Sales_item book;
	cout << "���������ۼ�¼��";
	while (cin >> book)
	cout << "ISBN�����۶��ƽ���ۼ�Ϊ " << book << endl;


//1.18
//  ���벢���б��ڵĳ��򣬸�������ȫ����ȵ�ֵ���ٴ����г�������û���ظ���ֵ��
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
	//			cout << a << "�����ظ�����Ϊ��" << cut << "��" << endl;
	//			cut = 0;
	//			a = b;
	//		}
	//	}
	//	cout << a << "�����ظ�����Ϊ��" << cut << "��" << endl;
	//}

//1.16
//	��д���򣬴�cin��ȡһ�����������͡�
	//int i = 0;
	//int sum = 0;

	//while (cin >> i)
	//{
	//	sum += i;
	//}
	//cout <<"sum is "<< sum << endl;

//1.12
//	�����forѭ�������ʲô���ܣ�sum����ֵ�Ƕ��٣�
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i)
	//	sum += i;
	//cout << sum << endl;

//1.11
//	��д������ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ�����������
	/*int a = 0;
	int b = 0;
	cout << "��������������";
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


//1.10   ����++���������������ֵ����1���⣬����һ���ݼ��������--��ʵ�ֽ�ֵ����1��
	//   ��д����ʹ�õݼ��������ѭ���а��ݼ����ӡ��10��0֮���������
	//int a = 10;

	//while (a >= 0)
	//{
	//	cout << a << endl;
	//	--a;
	//}


//1.9    ��д����ʹ��whileѭ����50��100��������ӡ�
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
	* ע�Ͷ�/* ����Ƕ��
	* ������Ƕ�ס������ֻᱻ��Ϊ��Դ�룬��ʣ�����һ������
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
