#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int thang;
	cout << "nhap thang:"; cin >> thang;
	switch (thang)
	{
	case 1:
		cout << "31 Ngay\n";
		break;
	case 2:
		cout << "29 Ngay\n";
		break;
	case 3:
		cout << "31 Ngay\n";
		break;
	case 4:
		cout << "30 Ngay\n";
		break;
	case 5:
		cout << "31 Ngay\n";
		break;
	case 6:
		cout << "30 Ngay\n";
		break;
	case 7:
		cout << "31 Ngay\n";
		break;
	case 8:
		cout << "31 Ngay\n";
		break;
	case 9:
		cout << "30 Ngay\n";
		break;
	case 10:
		cout << "31 Ngay\n";
		break;
	case 11:
		cout << "30 Ngay\n";
		break;
	case 12:
		cout << "31 Ngay\n";
		break;
	default:
		cout << "khong phai thang\n";
		break;
		return 0;
	}
}
