#include<iostream>
using namespace std;

void higestGrade(int[5][4]);
void flunkStu(int grade[5][4]);
void avg(int grade[5][4]);

int main()
{
	int grade[5][4];
	/*int grade[5][4] = {
		{12,12,12,12},
		{12,12,12,12},
		{12,12,12,12},
		{12,12,12,12},
		{12,12,12,12}
	};*/
	
	for (int j = 0; j < 5; j++)
	{
		cout << "������¼���" << j + 1 << "��ѧ���ĳɼ�";
		cout << endl;
		for (int k = 0; k < 4; k++)
		{
			cout << "��" << k + 1 << "�ſΣ�";
			cin >> grade[j][k];
		}
	}
	higestGrade(grade);
	flunkStu(grade);
	avg(grade);

}

void higestGrade(int grade[5][4])
{
	int grade1[5][4];
	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			grade1[j][k] = grade[j][k];
		}
	}
	int stu=0, course=0;
	int score = grade1[0][0];
	course = 0;
	
	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (grade1[j][k] > score)
			{
				score = grade1[j][k];
				stu = j + 1;
				course = k + 1;
			}
		}
	}
	grade1[stu - 1][course - 1] = 0;
	if (stu != 0)
	{


		cout << "�ɼ���ߵ��ǵ�" << stu << "λѧ��,��߷�Ϊ��"
			<< score << "����ĿΪ��" << course << "��" << endl;
	}
	

	for (int j = 0; j < 5; j++)
		{
		for (int k = 0; k < 4; k++)
			{
			if (grade1[j][k] == score)
				{
					score = grade1[j][k];
					stu = j + 1;
					course = k + 1;
					cout << "�ɼ���ߵ�Ҳ�ǵ�" << stu << "λѧ��,��߷�Ϊ��"
						<< score << "����ĿΪ��" << course << "��" << endl;
					grade1[stu - 1][course - 1] = 0;
					
				}
			}
		}
	

}

void flunkStu(int grade[5][4])
{
	int stu;
	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 4; k++)
		{
			if (grade[j][k] < 60)
			{
				stu = j + 1;
				cout << "��" << stu << "��ѧ���пγ̲���������ȫ���γ̳ɼ�Ϊ��";
				for (int i = 0; i < 4; i++)
				{
					cout << grade[j][i] << " ";
				}
				cout << endl;
				break;
			}
		}
	}
}

void avg(int grade[5][4])
{
	const double n = 5;
	for (int j = 0; j < 4; j++)
	{
		int all = 0;
		for (int k = 0; k < 5; k++)
		{
			all += grade[k][j];
		}
		cout << "��" << j +1<< "�ſε�ƽ���ɼ�Ϊ��" << all / n << endl;
	}
}