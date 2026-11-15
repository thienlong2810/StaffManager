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
        return luongCoBan + soGioOT * 200000;
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