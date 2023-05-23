#include<iostream>
using namespace std;
#include"CDia.h"
int main()
{
	CDia C;
	C.Nhap();
	C.Xuat();
	float tongdl = C.TinhDungLuong();
	cout << "\nTong dung luong:" << tongdl;
	int d = C.DemTapTin();
	cout << "\nSo luong tap tin:" << d;
	system("pause");
	return 0;
}