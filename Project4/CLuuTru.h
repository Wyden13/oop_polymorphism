#include<iostream>
using namespace std;
#include"CNgay.h"
class CLuuTru
{
protected:
	string Ten;
	CNgay NgayLap;
	float DungLuong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhDungLuong();
	virtual int LaTapTin();
};
void CLuuTru::Nhap()
{
	return;
}
void CLuuTru::Xuat()
{
	return;
}
float CLuuTru::TinhDungLuong()
{
	return 0;
}
int CLuuTru::LaTapTin()
{
	return 0;
}