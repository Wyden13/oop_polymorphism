#include<iostream>
#include<string>
#include<string.h>
using namespace std;
#include"CNgay.h"
class CNhanVien
{
protected:
	string HoTen;
	CNgay NgaySinh;
	float Luong;
	float LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhLuong();
	virtual float LayLuong();
	virtual CNhanVien* TimKiem(string);
};
void CNhanVien::Nhap()
{
	return;
}
void CNhanVien::Xuat()
{
	return;
}
void CNhanVien::TinhLuong()
{
	return;
}
float CNhanVien::LayLuong()
{
	return Luong;
}
CNhanVien* CNhanVien::TimKiem(string str)
{
	if (HoTen.compare(str) == 0)
		return this;
	return NULL;
}