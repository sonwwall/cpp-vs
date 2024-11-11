#include<iostream>
//#include<string>
using namespace std;
//int main()
//{
//	string old;
//	getline(cin, old);
//	int length = size(old);
//	string result;
//	for (int i = 0; i < length; i++)
//	{
//		result+=( old[length - i]);
//	}
//	cout << result;
//	cout << endl;
//	cout << length;

//}//纯使用字符串
int main()
{
	int num;
	cin >> num;
	int j = 1;
	int n = 0;
	while (1)
	{
		if (num / j == 0)
		{
			break;
		}
		j *= 10;
		n++;
	}
	j /= 10;
	cout <<"位数：" << n << endl;
	int result=0;
	int multi = 1;
	for (int i = 0; i < n; i++)
	{
		result += (num / j) * multi;
		num -= (num / j) * j;

		multi *= 10;
		j /= 10;
	}
	cout << result;

}
