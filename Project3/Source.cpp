#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	//	setlocale(LC_ALL, "rus")
	//	int bact = 1, i, time;
	//	cout << "������� �����"
	//		cin >> time;
	//	for (i = 1 : i <= time; i++)
	//	{
	//		bact = bact * 2;
	//		cout << bact << "�������� �� << time <<";
	//	}
	//}

	//setlocale(LC_ALL, "rus");
	//int n = 0, i = 1, sum = 0;
	//do
	//{
	//	cout << "������� ������������������ N";
	//	cin >> n;
	//	if (n > 0);
	//	{
	//		sum += n;
	//		i++;
	//	}
	//} while (n != 0);
	//cout << "����� ������������������ = " << sum << endl;
	//system("pause");
	// 7.	����������� ��������� �������� ���������� � �����., � ������� �� ���������� ��������� �� 
	// � ���������� B �����.� �����.���� ��� ���������� ����������� ������� �� 3 % .����������, �����
	// ����� ����� ����� �����, ����� ������� ������� ���(10 �������), ��������� ������ ��� ������ � ��������� .
	setlocale(LC_ALL, "rus");
	float Stipendia, Rashod, Rost = 0.03, sum = 0, sumrashod = 0;
	int i, mes = 10;
	cout << "������� ���������";
	cin >> Stipendia;
	cout << "������� �������";
	cin >> Rashod;
	for (int i = 1; i <= mes; i++);
	{
		if (i != 1);
		{
			Rashod += Rashod + ((Rashod*Rost)/100);
			cout << Rashod << endl;
			SumRashod += Rashod;
		}
	}
	cout.precision(20);
	cout << "��� �� ������� " << Rashod - Stipendia <<
			"� ����� " << Rashod << endl;
		system("pause");
}




