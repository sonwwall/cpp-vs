#include<iostream>
using namespace std;

int main()
{
	int lst1[10] = { 234,35,456,12,345,34,5,4,234,7 };
	int n = 0;

	for (int j = 0; j < 9; j++)
	{
		int m = 0;
		for (int k = 0; k < 9; k++)

		{
			if (lst1[k] > lst1[k + 1])
			{
				int i = lst1[k];
				lst1[k] = lst1[k + 1];
				lst1[k + 1] = i;
				m++;
			}
		}
		if (m == 0)
		{
			break;
		}
		m = 0;
		n++;
		}
	for (int i = 0; i < 10; i++)
	{
		cout << lst1[i] << " ";
	}
	cout << "总共进行了" << n << "次排序";
}