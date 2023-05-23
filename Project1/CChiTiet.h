#include<iostream>
using namespace std;

class CChiTiet
{
protected:
	long MaSo;
public: 
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTien();
	virtual CChiTiet* TimKiem(long);

};
//CChiTiet methods definition
void CChiTiet::Nhap()
{
	return;
}
void CChiTiet::Xuat()
{
	return;
}
float CChiTiet::TinhTien()
{
	return 0;
}
CChiTiet* CChiTiet::TimKiem(long ms)
{
	if (MaSo == ms)
		return this;
	return NULL;
}
