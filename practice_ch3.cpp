#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	const char s[] = { 'h', 'e', 'l', 'l', 'o' };
	const char* p = s;

	while (*p) {
		cout << *p << " ";
		++p;
	}

//	��ϰ��3.36
//		��дһ�γ��򣬱Ƚ����������Ƿ���ȡ���дһ�γ��򣬱Ƚ�����vector�����Ƿ���ȡ�
	//int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int c[10] = { 1,1,2,3,4,5,6,7,8,9 };
	//if(end(a) - begin(a)!= end(b) - begin(b))cout << "����a������b�����" << endl;
	//else {
	//	for (int i = 0; i < end(a) - begin(a); i++)
	//	{
	//		if (a[i] != b[i])cout << "����a������b�����" << endl;
	//		break;
	//	}
	//	cout << "����a������b���" << endl;
	//}	
	//if (end(a) - begin(a) != end(c) - begin(c))cout << "����a������c�����" << endl;
	//else {
	//	int j = 1;
	//	for (int i = 0; i < end(a) - begin(a); i++)if (a[i] != c[i])j = 0;
	//	if(j==0)cout << "����a������c�����" << endl;
	//	else cout << "����a������c���" << endl;
	//}

	//vector<int>v1 = {1,2,3,5,8 };
	//vector<int>v2 = {1,2,3,5,8 };
	//vector<int>v3 = {2,2,3,5,8 };

	//if (v1 != v2)cout << "v1!=v2"<<endl;
	//else cout << "v1=v2" << endl;
	//if (v1 != v3)cout << "v1!=v2" << endl;
	//else cout << "v1=v3" << endl;

//	��ϰ��3.35
//		��дһ�γ�������ָ�뽫�����е�Ԫ����Ϊ0
	/*int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = a;
	for (int i = 0; i < end(a)- begin(a); i++)
	{
		*(p + i) = 0;
		cout << *(p + i)<<' ';
	}
	cout << endl;*/

//	��ϰ��3.32
//		�����ⴴ�������鿽������һ������, ʹ��vector���³���
	//int a[10], b[10];
	//for (int i = 0; i < 10; i++)a[i] = i;
	//for (int j = 0; j < 10; j++)b[j] = a[j];
	//for (auto c : b)cout << c << ' ';
	//cout << endl;

	//vector<int>v1;
	//vector<int>v2;
	//for (int k = 0; k < 10; k++)v1.push_back(k);
	//v2 = v1;
	//for (auto d : v2)cout << d << " ";
	//cout << endl;

//	��ϰ��3.31
//		��д���򣬶���һ������Ϊ10��int���飬��ÿ��Ԫ�ص�ֵ�������±�ֵ��
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i] = i;
	//	cout << a[i] << " ";
	//}
	//cout << endl;

//	��ϰ��3.25
//		ʹ�õ��������ֳɼ���93ҳ��
		//vector<int>i(11, 0);
		//int s;
		//while (cin >> s)
		//{
		//	if (s <= 100)
		//		++* (i.begin() + s / 10);
		//}
		//for (auto j : i)
		//	cout << j << ' ';
		//cout << endl;
		
//	��ϰ��3.21
//		��ʹ�õ���������3.16�⡣
	//vector<int> v1;
	//if (v1.begin()!=v1.end())
	//{
	//	for (auto v = v1.begin();v < v1.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v1.cend()-v1.cbegin() << endl;
	//}
	//else cout << "noll" << endl;
	//vector<int> v2(10);
	//if (v2.begin() != v2.end())
	//{
	//	for (auto v = v2.begin(); v < v2.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v2.cend() - v2.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v3(10, 42);
	//if (v3.begin() != v3.end())
	//{
	//	for (auto v = v3.begin(); v < v3.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v3.cend() - v3.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v4{ 10 };
	//if (v4.begin() != v4.end())
	//{
	//	for (auto v = v4.begin(); v < v4.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v4.cend() - v4.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v5{ 10, 42 }; 
	//if (v5.begin() != v5.end())
	//{
	//	for (auto v = v5.begin(); v < v5.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v5.cend() - v5.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<string> v6{ 10 }; 
	//if (v6.begin() != v6.end())
	//{
	//	for (auto v = v6.begin(); v < v6.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v6.cend() - v6.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<string> v7{ 10, "hi" }; 
	//if (v7.begin() != v7.end())
	//{
	//	for (auto v = v7.begin(); v < v7.end(); v++)
	//		cout << *v << " ";
	//	cout << endl;
	//	cout << "size:" << v7.cend() - v7.cbegin() << endl;
	//}
	//else cout << "noll" << endl;

//	��ϰ��3.20
//		����һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ����������
//	��д�������Ҫ���������һ�������һ��֮�ͣ���������ڶ����͵����ڶ���֮�ͣ��������ơ�
	//vector<int>t;
	//int i;
	//while (cin >> i)
	//	t.push_back(i);
	//cout << "���������ĺ�:";
	//for (int j = 0; j < t.size()-1; j++)
	//	cout << t[j] + t[j + 1] << " ";
	//cout << endl;
	//cout << "��һ�������һ��֮��:";
	//if (t.size() % 2 == 0)
	//{
	//	for (int j = 0; j < t.size() / 2; j++)
	//		cout << t[j] + t[t.size() - 1 - j] << " ";
	//	cout << endl;
	//}
	//else
	//{
	//	for (int j = 0; j < t.size() / 2; j++)
	//		cout << t[j] + t[t.size() - 1 - j] << " ";
	//	cout << t[t.size() / 2] << endl;
	//}

//	��ϰ��3.19
//		����붨��һ������10��Ԫ�ص�vectorԪ�أ�����Ԫ��ֵ��Ϊ42�����о����ֲ�ͬ�ķ�ʽ�����ָ��� ? ԭ��
	/*vector<int>(10, 42);
	vector<int>{42,42,42,42,42,42,42,42,42,42};
	vector<int>i(10);
	for (auto& j : i)
	{
		j = 42;
		cout << j << " ";
	}*/
		
//	��ϰ��3.18
//		����ĳ���Ϸ��𣿸�����޸ģ�
	/*vector<int> ivec;
	ivec[0] = 42;*/

//	��ϰ��3.17
//		��cin����һ��ʲ������Ǵ���һ��vector����Ȼ���跨�����дʶ���Ϊ��д������ı��Ľ����ÿ����ռһ�С�
	/*string s;
	vector<string>t;
	while (cin >> s)
		t.push_back(s);
	for (auto& c : t)
	{
		c = toupper(c);
		if (c != " ")
			cout << c;
	}
	cout << endl;*/

//	��ϰ��3.16
//		��д���򣬽�13���е�vector����������ֵ���������֮ǰ�Ļش��Ƿ���ȷ
	//vector<int> v1;
	//if (!v1.empty())
	//{
	//	for (auto v : v1)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v1.size() << endl;
	//}
	//else cout << "noll" << endl;
	//	
	//vector<int> v2(10);
	//if (!v2.empty())
	//{
	//	for (auto v : v2)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v2.size() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v3(10, 42);
	//if (!v3.empty())
	//{
	//	for (auto v : v3)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v3.size() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v4{ 10 };
	//if (!v4.empty())
	//{
	//	for (auto v : v4)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v4.size() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<int> v5{ 10, 42 }; 
	//if (!v5.empty())
	//{
	//	for (auto v : v5)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v5.size() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<string> v6{ 10 }; 
	//if (!v1.empty())
	//{
	//	for (auto v : v1)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v1.size() << endl;
	//}
	//else cout << "noll" << endl;

	//vector<string> v7{ 10, "hi" }; 
	//if (!v1.empty())
	//{
	//	for (auto v : v1)
	//		cout << v << " ";
	//	cout << endl;
	//	cout << "size:" << v1.size() << endl;
	//}
	//else cout << "noll" << endl;
		
//	��ϰ��3.15
//		��д������򣬶����ַ���
	//string word;
	//vector<string>temp;
	//while (cin >> word)
	//	temp.push_back(word);

//	��ϰ��3.14
//		��дһ�γ�����cin����һ�������������Ǵ���vector����
	//int i;
	//vector<int>temp;
	//while (cin >> i)
	//	temp.push_back(i);
	//for (auto& j : temp)
	//	cout << j << " ";
	//cout << endl;

//	��ϰ 3.11
//		����ķ�Χ for ���Ϸ�������Ϸ���c ��������ʲô��
	//const string s = "Keep out!";
	//for (auto& c : s) { c = 's'; }

//	��ϰ 3.10
//		��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�
	//#1
	//string s;
	//int i = 0;
	//getline(cin, s);
	//for (auto& c : s)
	//{
	//	if (ispunct(c))
	//		continue;
	//	cout << c;
	//}
	//#2
	/*string str_in, str;
	getline(cin, str_in);
	for (auto c : str_in)
		if (!ispunct(c))
			str += c;
	cout << str << endl;*/


//	��ϰ3.8
//		�ֱ���whileѭ���ʹ�ͳforѭ����д��һ��ĳ��������������ʽ�����أ�Ϊʲô��
	//string s;
	//getline(cin, s);
	////��ͳforѭ��
	//for (int i=0 ; i < s.size(); ++i)
	//	s[i] = 'X';
	//cout << s << endl;
	////whileѭ��
	//int j = 0;
	//while (j < s.size())
	//{
	//	s[j] = 'X';
	//	++j;
	//}
	//cout << s << endl;

//	��ϰ 3.7
//		����һ����ɵĳ�����ԣ������ѭ�����Ƶı�������Ϊchar ������ʲô���ȹ���һ�½����Ȼ��ʵ�ʱ�̽�����֤��
	/*string s;
	cin >> s;
	for (char& c : s)
		c = 'X';
	cout << s << endl;*/

//	��ϰ 3.6
//		��дһ�γ���ʹ�÷�Χ for ��佫�ַ����������ַ��� X ����
	//string s;
	//cin >> s;
	//for (auto& c : s)
	//	c = 'X';
	//cout << s << endl;


//	��ϰ 3.5
//		��дһ�γ���ӱ�׼�����ж������ַ���������������������
//	������ӳɵĴ��ַ�����Ȼ���޸����������ÿո������Ķ���ַ����ָ����
	////����ַ�����������������
	//string word,s;
	//while (cin >> word)
	//	s += word;
	//cout << s << endl;
	////�ո������Ķ���ַ����ָ��
	////#1
	//string word1, s1, line;
	//while (cin >> word1)
	//	s1 += " " + word1;
	//cout << s1 << endl;
	////#2
	//getline(cin, line);
	//cout << line << endl;

//	��ϰ 3.4
//		��дһ�γ����ȡ�����ַ������Ƚ����Ƿ���Ȳ���������
//	�������ȣ�����Ƚϴ���Ǹ��ַ�����
//	��д�������򣬱Ƚ�����������ַ����Ƿ�ȳ���������ȳ���������Ƚϴ���Ǹ��ַ�����
	////�ַ����Ƚϣ�
	//string word0, word1;
	//cin >> word0 >> word1;
	//if (word0 == word1)
	//	cout << "word0 = word1 = " << word0 << endl;
	//else
	//	cout << (word0 > word1 ? word0 : word1) << endl;
	////�ַ������ȱȽϣ�
	//string word2, word3;
	//cin >> word2 >> word3;
	//if (word2.size() == word3.size())
	//	cout <<  word2 << endl;
	//else
	//	cout << (word2.size() > word3.size() ? word2 : word3) << endl;

//	��ϰ 3.2
//		��дһ�γ���ӱ�׼������һ�ζ���һ���У�Ȼ���޸ĸó���ʹ��һ�ζ���һ���ʡ�
	////����
	//string line;
	//while(getline(cin, line))
	//cout << line << endl;
	////����
	//string word;
	//while (cin >> word)
	//	cout <<  word << " ";
	//cout << endl;

	return 0;
}
