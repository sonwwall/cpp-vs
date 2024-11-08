#include<iostream>
#include<string>
using namespace std;
int main()
{
	string old;
	getline(cin, old);
	int length = size(old);
	string result;
	for (int i = 0; i < length; i++)
	{
		result+=( old[length - i]);
	}
	cout << result;
	cout << endl;
	cout << length;

}//´¿Ê¹ÓÃ×Ö·û´®