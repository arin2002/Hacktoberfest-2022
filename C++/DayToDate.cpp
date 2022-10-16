#include <iostream>
#include <string>
using namespace std;
class DayofYear
{
private:
	int day;
public:
	DayofYear(int d)
	{
		day = d;

	}
	void Print()
	{

		  string months[] = {" ","January","Feburary","March","April","May","June","July","August","September","October","November","December" };
	        int DaysInEachMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (day < 0 && day>365)
		{
			cout << "ERROR......!" << endl;
			exit(0);
		}
		if (day > 0 && day <= 31)
		{
			cout << months[1] << " " << day;
		}
		else if (day > 31 && day <= 59)
		{
			day -= DaysInEachMonth[1];
			cout << months[2] << " " << day;
			
		}
		else if (day > 59 && day <=90)
		{   
			day -= DaysInEachMonth[1] + DaysInEachMonth[2];
			cout << months[3] << " " << day;
		}
		else if (day >90 && day <=120)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3];
			cout << months[4] << " " << day;
		}
		else if (day > 120 && day <= 151)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4];
			cout << months[5] << " " << day;
		}
		else if (day >151 && day <= 181)

		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5];
			cout << months[6] << " " << day;
		}
		else if (day > 181 && day <= 212)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6];
			cout << months[7] << " " << day;
		}
		else if (day > 212 && day <= 243)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6] + DaysInEachMonth[7];
			cout << months[8] << " " << day;
		}
		else if (day > 243 && day <= 273)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6] + DaysInEachMonth[7] + DaysInEachMonth[8];
			cout << months[9] << " " << day;
		}
		else if (day >273 && day <= 304)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6] + DaysInEachMonth[7] + DaysInEachMonth[8] + DaysInEachMonth[9];
			cout << months[10] << " " << day;
		}
		else if (day > 304 && day <= 334)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6] + DaysInEachMonth[7] + DaysInEachMonth[8] + DaysInEachMonth[9] + DaysInEachMonth[10];
			cout << months[11] << " " << day;
		}
		else if (day > 334 && day <= 365)
		{
			day -= DaysInEachMonth[1] + DaysInEachMonth[2] + DaysInEachMonth[3] + DaysInEachMonth[4] + DaysInEachMonth[5] + DaysInEachMonth[6] + DaysInEachMonth[7] + DaysInEachMonth[8] + DaysInEachMonth[9] + DaysInEachMonth[10] + DaysInEachMonth[11];
			cout << months[12] << " " << day;
		}

	}

};
int main()
{
	DayofYear d[5] = {4,365,78,9,100};
	for (int i = 0; i < 5; i++)
	{
		d[i].Print();
		cout << endl;
	}

	return 0;
}