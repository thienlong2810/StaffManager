#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
protected:
    string maNV , hoTen;
    double luongCoBan;
public:
    NhanVien(string _maNV , string _hoTen , double _luongCoBan)
    {
        maNV = _maNV;
        hoTen = _hoTen;
        luongCoBan = _luongCoBan;
    }
    virtual double tinhLuong() = 0;
    virtual void hienThi()
    {
        cout << "Ma nhan vien: " << maNV << '\n';
        cout << "Ho ten: " << hoTen << '\n';
        cout << "Luong co ban: " << luongCoBan << '\n';
    }
    string getMa(){return maNV;}
    string getHoTen(){return hoTen;}
    ~NhanVien() {}
};
class LapTrinhVien : public NhanVien
{
public:
    int soGioOT;
    LapTrinhVien(string _maNV , string _hoTen , double _luongCoBan , int _soGioOT) : NhanVien(_maNV ,_hoTen , _luongCoBan)
    {
        soGioOT = _soGioOT;
    }
    double tinhLuong() override
    {
        return luongCoBan + soGioOT * 280000;
    }
    void hienThi() override
    {
        cout << "Ma nhan vien: " << maNV << '\n';
        cout << "Ho ten: " << hoTen << '\n';
        cout << "Luong co ban: " << luongCoBan << '\n';
        cout << "So gio OT: " << soGioOT << '\n';
        cout << "Tong luong thuc nhan: " << tinhLuong() << '\n';
    }

};
class Quanly : public NhanVien
{
    double phuCapChucVu;
public:
    Quanly(string _maNV , string _hoTen , double _luongCoBan , double _phuCapChucVu) : NhanVien(_maNV ,_hoTen , _luongCoBan)
    {
        phuCapChucVu = _phuCapChucVu;
    }
    double tinhLuong() override
    {
        return luongCoBan + phuCapChucVu;
    }
    void hienThi() override
    {
        cout << "Ma nhan vien: " << maNV << '\n';
        cout << "Ho ten: " << hoTen << '\n';
        cout << "Luong co ban: " << luongCoBan << '\n';
        cout << "Tong luong thuc nhan: " << tinhLuong() << '\n';
    }
};
class Congty
{
    vector<NhanVien*> danhSachNV;
public:
    void themNhanVien(NhanVien* nv)
    {
        danhSachNV.push_back(nv);
    }
    void hienThiTatCa()
    {
        for(auto nv : danhSachNV)
        {
            nv->hienThi();
        }
    }
    void tinhTongQuyLuong()
    {
        double sum = 0;
        for(auto nv : danhSachNV)
        {
            double luong = nv->tinhLuong();
            sum += luong;
        }
        cout << "Tong quy luong la: " << sum << '\n';
    }
    void timKiemTheoMa(string ma)
    {
        for(auto it : danhSachNV)
        {
            string maHienTai = it->getMa();
            if(maHienTai == ma)
            {
                it->hienThi();
            }
        }
    }
    ~Congty()
    {
        for(auto &nv : danhSachNV) delete nv;
    }

};