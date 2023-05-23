#include<string>
#include<iomanip>
class CTapTin:public CLuuTru
{
public:
	void Nhap();
	void Xuat();
	float TinhDungLuong();
	int LaTapTin();
};
void CTapTin::Nhap()
{
	cout << "Nhap ten tap tin:";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap ngay lap ";
	NgayLap.Nhap();
	cout << "Nhap dung luong tap tin:";
	cin >> DungLuong;
}
void CTapTin::Xuat()
{
	cout << "\nTap tin:" << Ten;
	cout << "\nNgay lap:";
	NgayLap.Xuat();
	cout << "\nDung luong:" << DungLuong;
}
float CTapTin::TinhDungLuong()
{
	return DungLuong;
}
int CTapTin::LaTapTin()
{
	return 1;
}