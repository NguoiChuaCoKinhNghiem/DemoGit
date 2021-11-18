#include <iostream>
using namespace std;
int tong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	
	if (strcmp(phepToan, "+") == 0)
		cout << "Phep tong la :" << tong;
	system("pause");
	return 0;
}
//Cau19