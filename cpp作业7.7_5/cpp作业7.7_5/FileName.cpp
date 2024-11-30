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
		cout << "您正在录入第" << j + 1 << "名学生的成绩";
		cout << endl;
		for (int k = 0; k < 4; k++)
		{
			cout << "第" << k + 1 << "门课：";
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


		cout << "成绩最高的是第" << stu << "位学生,最高分为："
			<< score << "，科目为第" << course << "科" << endl;
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
					cout << "成绩最高的也是第" << stu << "位学生,最高分为："
						<< score << "，科目为第" << course << "科" << endl;
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
				cout << "第" << stu << "名学生有课程不及格，他的全部课程成绩为：";
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
		cout << "第" << j +1<< "门课的平均成绩为：" << all / n << endl;
	}
}