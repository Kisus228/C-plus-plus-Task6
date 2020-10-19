#include <cstdio>
#include "Uvalue.h"
#include "Rvalue.h"
#include "Ivalue.h"
#include "Tvalue.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	{
		Rvalue rvalue(20);
		Ivalue ivalue(80);
		Uvalue uvalue = rvalue * ivalue;
		cout << "������ ���������� U �� ��������� ��������� ���� I � ������������� R: " << uvalue << endl;
	}
	{
		Uvalue uvalue(80);
		Rvalue rvalue(20);
		Ivalue ivalue = uvalue / rvalue;
		cout << "������ ���� I �� ��������� ��������� ���������� U � ������������� R: " << ivalue << endl;
	}
	{
		Uvalue uvalue(100);
		Ivalue ivalue(10);
		Rvalue rvalue = uvalue / ivalue;
		cout << "������ ������������� R �� ��������� ��������� ���������� U � ���� I: " << rvalue << endl;
	}
	{
		Rvalue r1(50);
		Rvalue r2(30);
		Rvalue r1r2InRow = r1 + r2;
		Rvalue r1r2InParallel = r1 % r2;
		cout << "������ ��������� ������������� ��� ����������������� ���������� ����������: " << r1r2InRow << endl;
		cout << "������ ��������� ������������� ��� ������������� ���������� ����������: " << r1r2InParallel << endl;
	}
	{
		Cvalue c1(70);
		Cvalue c2(50);
		Cvalue c1c2InRow = c1 + c2;
		Cvalue c1c2InParallel = c1 % c2;
		cout << "������ �������� ������� ��� ������������� ���������� �������������: " << c1c2InRow << endl;
		cout << "������ �������� ������� ��� ����������������� ���������� �������������: " << c1c2InParallel << endl;
	}
	{
		Cvalue cvalue(10e-6);
		Rvalue rvalue(200e+3);
		Uvalue uvalue(1);
		Ivalue ivalue(uvalue / rvalue);
		for (double t = 0; t <= 2+1e-9; t += 0.1)
		{
			Tvalue tvalue(t);
			Qvalue qvalue = ivalue * tvalue;
			cout << "t: " << tvalue << " U: " << qvalue / cvalue << endl;
		}
	}
	return 0;
}
