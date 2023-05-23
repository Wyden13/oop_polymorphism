#include<iostream>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
};
void CNgay::Nhap()
{
	cout << "\nNhap ngay:";
	cin >> Ngay;
	cout << "Nhap thang:";
	cin >> Thang;
	cout << "Nhap nam:";
	cin >> Nam;
}
void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam;
}