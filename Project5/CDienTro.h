
class CDienTro :public CMachDien
{
protected:
	string MaSo;
	float R;
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};
void CDienTro::Nhap()
{
	cout << "Nhap ma so:";
	cin >> MaSo;
	cout << "Nhap R:";
	cin >> R;
}
void CDienTro::Xuat()
{
	cout << "\nMa so:";
	cout << MaSo;
	cout << "\nDien tro R:";
	cout << R;
}
float CDienTro::TinhDienTro()
{
	return R;
}