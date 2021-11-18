#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int tich(int a, int b) {
	return a * b;
}
int hieu(int a, int b)
{
		int hieu;
		hieu = a - b;
		return hieu;
}

int tong(int a, int b)
{
	int tong;
	tong = a + b;
	return tong;
}
int hieu(int a, int b);
bool kTraChanLe(int x) {
	if (x % 2 == 0)
		return true
	else
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
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;


	if (strcmp(phepToan, "-") == 0)
		return hieu;
	cout << "Phep hieu la:" << hieu(a,b);

	
	if (strcmp(phepToan, "+") == 0)
		cout << "Phep tong la :" << tong(a,b);

	if (phepToan == *)
	cout << "Phep tinh tich là:" << tich(a, b);
	int x''
	cout << "Nhap so nguyen x:";
	cin >> x;
	if (kTraChanLe)
		cout << "So nguyen x=" + x + " la so chan";
	else
		cout << "So nguyen x=" + x + " la so le";

	system("pause");
	return 0;
}