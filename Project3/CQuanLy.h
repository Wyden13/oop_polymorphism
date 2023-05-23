#include<iostream>
using namespace std;
class CQuanLy :public CNhanVien
{
protected:
	float HeSoChucVu;
	float Thuong;
public:
	void Nhap();
	void TinhLuong();
	void Xuat();
	float LayLuong();
	CNhanVien* TimKiem(string);
};
void CQuanLy::Nhap()
{
	cout << "Nhap ho ten:";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay sinh ";
	NgaySinh.Nhap();
	cout << "Nhap luong co ban:";
	cin >> LuongCoBan;
	cout << "He so chuc vu:";
	cin >> HeSoChucVu;
	cout << "Nhan thuong";
	cin >> Thuong;
}
void CQuanLy::Xuat()
{
	cout << "\nHo ten:" << HoTen;
	cout << "\nNgay sinh:";
	NgaySinh.Xuat();
	cout << "\nLuong co ban" << LuongCoBan;
	cout << "\nHe so chuc vu" << HeSoChucVu;
	cout << "\nTien thuong" << Thuong;
	cout << "\nLuong:" << Luong;
}
void CQuanLy::TinhLuong()
{
	Luong = LuongCoBan * HeSoChucVu + Thuong;
}
float CQuanLy::LayLuong()
{
	return Luong;
}
CNhanVien* CQuanLy::TimKiem(string str)
{
	if (HoTen.compare(str) == 0)
		return this;
	return NULL;
}
