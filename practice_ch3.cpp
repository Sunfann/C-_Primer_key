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

//	练习题3.36
//		编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等。
	//int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int c[10] = { 1,1,2,3,4,5,6,7,8,9 };
	//if(end(a) - begin(a)!= end(b) - begin(b))cout << "数组a与数组b不相等" << endl;
	//else {
	//	for (int i = 0; i < end(a) - begin(a); i++)
	//	{
	//		if (a[i] != b[i])cout << "数组a与数组b不相等" << endl;
	//		break;
	//	}
	//	cout << "数组a与数组b相等" << endl;
	//}	
	//if (end(a) - begin(a) != end(c) - begin(c))cout << "数组a与数组c不相等" << endl;
	//else {
	//	int j = 1;
	//	for (int i = 0; i < end(a) - begin(a); i++)if (a[i] != c[i])j = 0;
	//	if(j==0)cout << "数组a与数组c不相等" << endl;
	//	else cout << "数组a与数组c相等" << endl;
	//}

	//vector<int>v1 = {1,2,3,5,8 };
	//vector<int>v2 = {1,2,3,5,8 };
	//vector<int>v3 = {2,2,3,5,8 };

	//if (v1 != v2)cout << "v1!=v2"<<endl;
	//else cout << "v1=v2" << endl;
	//if (v1 != v3)cout << "v1!=v2" << endl;
	//else cout << "v1=v3" << endl;

//	练习题3.35
//		编写一段程序，利用指针将数组中的元素置为0
	/*int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = a;
	for (int i = 0; i < end(a)- begin(a); i++)
	{
		*(p + i) = 0;
		cout << *(p + i)<<' ';
	}
	cout << endl;*/

//	练习题3.32
//		将上题创建的数组拷贝给另一个数组, 使用vector重新程序。
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

//	练习题3.31
//		编写程序，定义一个长度为10的int数组，令每个元素的值就是其下标值。
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i] = i;
	//	cout << a[i] << " ";
	//}
	//cout << endl;

//	练习题3.25
//		使用迭代器划分成绩（93页）
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
		
//	练习题3.21
//		请使用迭代器重做3.16题。
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

//	练习题3.20
//		读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来，
//	改写程序，这次要求先输出第一个和最后一个之和，接着输出第二个和倒数第二个之和，依次类推。
	//vector<int>t;
	//int i;
	//while (cin >> i)
	//	t.push_back(i);
	//cout << "相邻整数的和:";
	//for (int j = 0; j < t.size()-1; j++)
	//	cout << t[j] + t[j + 1] << " ";
	//cout << endl;
	//cout << "第一个和最后一个之和:";
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

//	练习题3.19
//		如果想定义一个含有10个元素的vector元素，所有元素值都为42，请列举三种不同的方式，哪种更好 ? 原因？
	/*vector<int>(10, 42);
	vector<int>{42,42,42,42,42,42,42,42,42,42};
	vector<int>i(10);
	for (auto& j : i)
	{
		j = 42;
		cout << j << " ";
	}*/
		
//	练习题3.18
//		下面的程序合法吗？该如何修改？
	/*vector<int> ivec;
	ivec[0] = 42;*/

//	练习题3.17
//		从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改为大写。输出改变后的结果，每个词占一行。
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

//	练习题3.16
//		编写程序，将13题中的vector对象容量和值输出。检验之前的回答是否正确
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
		
//	练习题3.15
//		改写上题程序，读入字符串
	//string word;
	//vector<string>temp;
	//while (cin >> word)
	//	temp.push_back(word);

//	练习题3.14
//		编写一段程序，用cin读入一组整数并把它们存入vector对象。
	//int i;
	//vector<int>temp;
	//while (cin >> i)
	//	temp.push_back(i);
	//for (auto& j : temp)
	//	cout << j << " ";
	//cout << endl;

//	练习 3.11
//		下面的范围 for 语句合法吗？如果合法，c 的类型是什么？
	//const string s = "Keep out!";
	//for (auto& c : s) { c = 's'; }

//	练习 3.10
//		编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
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


//	练习3.8
//		分别用while循环和传统for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？
	//string s;
	//getline(cin, s);
	////传统for循环
	//for (int i=0 ; i < s.size(); ++i)
	//	s[i] = 'X';
	//cout << s << endl;
	////while循环
	//int j = 0;
	//while (j < s.size())
	//{
	//	s[j] = 'X';
	//	++j;
	//}
	//cout << s << endl;

//	练习 3.7
//		就上一题完成的程序而言，如果将循环控制的变量设置为char 将发生什么？先估计一下结果，然后实际编程进行验证。
	/*string s;
	cin >> s;
	for (char& c : s)
		c = 'X';
	cout << s << endl;*/

//	练习 3.6
//		编写一段程序，使用范围 for 语句将字符串内所有字符用 X 代替
	//string s;
	//cin >> s;
	//for (auto& c : s)
	//	c = 'X';
	//cout << s << endl;


//	练习 3.5
//		编写一段程序从标准输入中读入多个字符串并将他们连接起来，
//	输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分割开来。
	////多个字符串将他们连接起来
	//string word,s;
	//while (cin >> word)
	//	s += word;
	//cout << s << endl;
	////空格把输入的多个字符串分割开来
	////#1
	//string word1, s1, line;
	//while (cin >> word1)
	//	s1 += " " + word1;
	//cout << s1 << endl;
	////#2
	//getline(cin, line);
	//cout << line << endl;

//	练习 3.4
//		编写一段程序读取两个字符串，比较其是否相等并输出结果。
//	如果不相等，输出比较大的那个字符串。
//	改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。
	////字符串比较：
	//string word0, word1;
	//cin >> word0 >> word1;
	//if (word0 == word1)
	//	cout << "word0 = word1 = " << word0 << endl;
	//else
	//	cout << (word0 > word1 ? word0 : word1) << endl;
	////字符串长度比较：
	//string word2, word3;
	//cin >> word2 >> word3;
	//if (word2.size() == word3.size())
	//	cout <<  word2 << endl;
	//else
	//	cout << (word2.size() > word3.size() ? word2 : word3) << endl;

//	练习 3.2
//		编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词。
	////按行
	//string line;
	//while(getline(cin, line))
	//cout << line << endl;
	////按字
	//string word;
	//while (cin >> word)
	//	cout <<  word << " ";
	//cout << endl;

	return 0;
}
