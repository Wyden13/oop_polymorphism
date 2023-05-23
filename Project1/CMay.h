#include<iostream>
#include"CChiTiet.h"
#include"CChiTietDon.h"
#include"CChiTietPhuc.h"
using namespace std;

class CMay
{
protected:
	int n;//so luong chi tiet
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	CChiTiet* TimKiem(long);
	//virtual void operator=(const CChiTiet&);
};

void CMay::Nhap()
{
	cout << "Nhap so luong chi tiet thanh phan:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai (0.Don, 1.Phuc)";
		cin >> loai;
		CChiTietDon* a;
		switch (loai)
		{
		case 0: ds[i] = new CChiTietDon;
			break;
		case 1: ds[i] = new CChiTietPhuc;
			break;
		}
		ds[i]->Nhap();
	}
}
void CMay::Xuat()
{
	cout << "\n So luong chi tiet thanh phan:" << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
float CMay::TinhTien()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhTien();
	}
	return s;
}
CChiTiet* CMay::TimKiem(long ms)
{
	for (int i = 0; i < n; i++)
	{
		CChiTiet *kq = ds[i]->TimKiem(ms);
		if (kq != NULL)
			return kq;
	}
	return NULL;
}


