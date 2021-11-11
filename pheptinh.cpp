#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b)
{
		int hieu;
		hieu = a - b;
		return hieu;
}
=======
int tong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}
int hieu(int a, int b);
>>>>>>> fb0a6993e23c75ea7716bd0e6d4b786adec4a247

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
<<<<<<< HEAD

	if (strcmp(phepToan, "-") == 0)
		return hieu;
	cout << "Phep hieu la:" << hieu;
=======
	
	if (strcmp(phepToan, "+") == 0)
		cout << "Phep tong la :" << tong;
>>>>>>> fb0a6993e23c75ea7716bd0e6d4b786adec4a247
	system("pause");
	return 0;
}