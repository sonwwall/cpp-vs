#include<iostream>
using namespace std;
int main()
{
	int lst[5] = { 1,3,5,7,9 };
	int in;
	cin >> in;
	int newlst[5];

	if (in > 9)
	{
		cout << "������������Ϊ:" << in << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << lst[i] << " ";
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			if (in >= lst[i] && in <= lst[i + 1])
			{
				for (int n = 0; n < i+1; n++)
				{
					newlst[n] = lst[n];
				}
				newlst[i + 1] = in;
				for (int n = i + 2; n < 5; n++)
				{
					newlst[n] = lst[n];
				}
			}
		}
		cout << "������������Ϊ��9" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << newlst[i] << " ";
		}
	}
}