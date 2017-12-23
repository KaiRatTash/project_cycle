#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	//	setlocale(LC_ALL, "rus")
	//	int bact = 1, i, time;
	//	cout << "¬ведите врем€"
	//		cin >> time;
	//	for (i = 1 : i <= time; i++)
	//	{
	//		bact = bact * 2;
	//		cout << bact << "Ѕактерий за << time <<";
	//	}
	//}

	//setlocale(LC_ALL, "rus");
	//int n = 0, i = 1, sum = 0;
	//do
	//{
	//	cout << "¬ведите последовательность N";
	//	cin >> n;
	//	if (n > 0);
	//	{
	//		sum += n;
	//		i++;
	//	}
	//} while (n != 0);
	//cout << "сумма последовательности = " << sum << endl;
	//system("pause");
	// 7.	≈жемес€чна€ стипенди€ студента составл€ет ј тенге., а расходы на проживание превышают ее 
	// и составл€ют B тенге.в мес€ц.–ост цен ежемес€чно увеличивает расходы на 3 % .ќпределить, какую
	// нужно иметь сумму денег, чтобы прожить учебный год(10 мес€цев), использу€ только эти деньги и стипендию .
	setlocale(LC_ALL, "rus");
	float Stipendia, Rashod, Rost = 0.03, sum = 0, sumrashod = 0;
	int i, mes = 10;
	cout << "¬ведите стипендию";
	cin >> Stipendia;
	cout << "¬ведите расходы";
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
	cout << "≈му не хватает " << Rashod - Stipendia <<
			"а нужно " << Rashod << endl;
		system("pause");
}




