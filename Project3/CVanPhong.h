#include<iostream>
//#include"CNhanVien.h"
using namespace std;
class CVanPhong :public CNhanVien
{
protected:
	int SoNgayLam;
	float TroCap;
public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float LayLuong();
	CNhanVien* TimKiem(string);
};
void CVanPhong::Nhap()
{
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay sinh:";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban:";
	cin >> LuongCoBan;
	cout << "So ngay lam viec:";
	cin >> SoNgayLam;
	cout << "Nhan tro cap:";
	cin >> TroCap;
}
void CVanPhong::Xuat()
{
	cout << "\nHo ten:" << HoTen;
	cout << "\nNgay sinh:";
	NgaySinh.Xuat();
	cout << "\nLuong co ban:" << LuongCoBan;
	cout << "\nSo ngay lam viec:" << SoNgayLam;
	cout << "\nTro cap:" << TroCap;
	cout << "\nLuong:" << Luong;
}
void CVanPhong::TinhLuong()
{
	Luong = LuongCoBan + SoNgayLam * 100000 + TroCap;
}
float CVanPhong::LayLuong()
{
	return Luong;
}
CNhanVien* CVanPhong::TimKiem(string str)
{
	if (HoTen.compare(str) == 0)
		return this;
	return NULL;
}