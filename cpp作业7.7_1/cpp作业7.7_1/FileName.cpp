#include<iostream>
using namespace std;
int main()
{
	int lst[10] = { 34,91,83,56,29,93,56,12,88,72 };
	int min = lst[0];
	int n = 0;
	for (int i = 0; i < 9; i++)
	{
		if (min > lst[i + 1])
		{
			min = lst[i + 1];
			n = i + 1;
		}
	}
	cout << min << endl;
	cout << n;
}