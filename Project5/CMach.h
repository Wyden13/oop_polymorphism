class CMachNoiTiep;
class CMachSongSong :public CMachDien
{
protected:
	int n;
	CMachDien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};
void CMachSongSong::Nhap()
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai (0. Noi tiep, 1. Song song, 2.Dien tro):";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CMachNoiTiep;
			break;
		case 1:ds[i] = new CMachSongSong;
			break;
		}
		ds[i]->Nhap();
	}
}
void CMachSongSong::Xuat()
{
	cout << "\nSo luong mach dien thanh phan:";
	cout << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
float CMachSongSong::TinhDienTro()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + 1 / ds[i]->TinhDienTro();
	return 1 / s;

}
class CMachNoiTiep :public CMachDien
{
protected:
	int n;
	CMachDien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTro();
};
void CMachNoiTiep::Nhap()
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai (0. Noi tiep, 1. Song song, 2.Dien tro):";
		cin >> loai;
		switch (loai)
		{
		case 0: ds[i] = new CMachNoiTiep;
			break;
		case 1:ds[i] = new CMachSongSong;
			break;
		}
		ds[i]->Nhap();
	}
}
void CMachNoiTiep::Xuat()
{
	cout << "\nSo luong mach dien thanh phan:";
	cout << n;
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}
float CMachNoiTiep::TinhDienTro()
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + ds[i]->TinhDienTro();
	return s;

}

