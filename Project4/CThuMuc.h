class CThuMuc:public CLuuTru
{
protected:
	int n;
	CLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDungLuong();
	int LaTapTin();
};
void CThuMuc::Nhap()
{
	cout << "Nhap ten thu muc:";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap so luong thanh phan trong thu muc:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap thanh phan luu tru trong thu muc(0.Tap tin, 1.Thu muc): ";
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
void CThuMuc::Xuat()
{
	cout << "\nThu muc:" << Ten;
	cout << "\nSo doi tuong luu tru trong thu muc:" << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
float CThuMuc::TinhDungLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhDungLuong();
	}
	return s;
}
int CThuMuc::LaTapTin()
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i]->LaTapTin() == 1) dem++;
	}
	return dem;
}