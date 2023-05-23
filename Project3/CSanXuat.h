#include<iostream>
using namespace std;
//#include"CNhanVien.h"
class CSanXuat:public CNhanVien 
{
protected:
	int SoSanPham;
public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float LayLuong();
	CNhanVien* TimKiem(string);
};
void CSanXuat::Nhap()
{
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay sinh:";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban:";
	cin >> LuongCoBan;
	cout << "Nhap so san pham:";
	cin >> SoSanPham;
}
void CSanXuat::Xuat()
{
	cout << "\nHo ten:" << HoTen;
	cout << "\nNhay sinh:";
	NgaySinh.Xuat();
	cout << "\nLuong co ban:" << LuongCoBan;
	cout << "\nSo san pham:" << SoSanPham;
	cout << "\nLuong:" << Luong;
}
void CSanXuat::TinhLuong()
{
	Luong = LuongCoBan + SoSanPham * 2000;
}
float CSanXuat::LayLuong()
{
	return Luong;
}
CNhanVien* CSanXuat::TimKiem(string str)
{
	if (HoTen.compare(str) == 0)
		return this;
	return NULL;
}