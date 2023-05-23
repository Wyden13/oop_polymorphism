#include<iostream>
using namespace std;
#include"CLuuTru.h"
#include"CTapTin.h"
#include"CThuMuc.h"
class CDia
{
protected:
	int n;
	CLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDungLuong();
	int DemTapTin();
};
void CDia::Nhap()
{
	cout << "Nhap so luong luu tru:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap thanh phan luu tru (0.Tap tin, 1.Thu muc): ";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CTapTin;
			break;
		case 1: ds[i] = new CThuMuc;
			break;
		}
		ds[i]->Nhap();
	}
}
void CDia::Xuat()
{
	cout << "So luong doi tuong luu tru trong dia:" << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
float CDia::TinhDungLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhDungLuong();
	}
	return s;
}
int CDia::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		dem = dem + ds[i]->LaTapTin();
	}
	return dem;
}