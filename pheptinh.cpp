#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
		int hieu;
		hieu = a - b;
		return hieu;
}

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

	if (strcmp(phepToan, "-") == 0)
		return hieu;
	cout << "Phep hieu la:" << hieu;
	system("pause");
	return 0;
}