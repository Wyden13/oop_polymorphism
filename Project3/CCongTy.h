#include<iostream>
#include"CNhanVien.h"
#include"CSanXuat.h"
#include"CVanPhong.h"
#include"CQuanLy.h"
using namespace std;

class CCongTy
{
protected:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	float TongLuong();
	CNhanVien* TimKiem(string);
};
void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien trong cong ty:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		int loai;
		cout << "Nhap loai (0.San xuat, 1.Van phong, 2.Quan ly) : ";
		cin >> loai;
		switch (loai)
		{
		case 0:ds[i] = new CSanXuat;
			break;
		case 1:ds[i] = new CVanPhong;
			break;
		case 2:ds[i] = new CQuanLy;
			break;
		}
		ds[i]->Nhap();
	}
}
void CCongTy::Xuat()
{
	cout << "\nSo luong nhan vien:" << n;
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
		cout << "\n";
	}
}
void CCongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
		ds[i]->TinhLuong();
}
float CCongTy::TongLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->LayLuong();
	return s;
}
CNhanVien* CCongTy::TimKiem(string str)
{
	for (int i = 0; i < n; i++)
	{
		CNhanVien* kq = ds[i]->TimKiem(str);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}