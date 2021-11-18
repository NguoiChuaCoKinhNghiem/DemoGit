#include <iostream>
using namespace std;
int tong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}
int hieu(int a, int b);
bool kTra(int x) {
	if (x % 2 == 0)
		return true;
	return false;
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
	
	if (strcmp(phepToan, "+") == 0)
		cout << "Phep tong la :" << tong;
	int x;
	cout << "Nhap x:";
	cin << x;
	if (ktra)
		cout << "So nguyen x=" + x + "la so chan";
	cout << "So nguyen x=" + x + "la so le";

	system("pause");
	return 0;
}
//Cau19