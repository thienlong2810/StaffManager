#include <bits/stdc++.h>
#include "staff.cpp"
using namespace std;

int main()
{
    Congty myComp;
    while(true)
    {
        cout << "Vui long nhap yeu cau: ";
        int type;
        cin >> type;
        if(type == 1)
        {
            string maNhanVien , hoTen;
            double luongCoBan;
            int soGioOT;
            
            cout << "Hay nhap ma nhan vien: ";
            cin >> maNhanVien;

            cout << "Hay nhap ho ten: ";
            cin >> hoTen;

            cout << "Hay nhap luong co ban: ";
            cin >> luongCoBan;

            cout << "Hay nhap so gio OT: ";
            cin >> soGioOT;

            NhanVien* nhanVienMoi = new LapTrinhVien(maNhanVien , hoTen , luongCoBan , soGioOT);
            myComp.themNhanVien(nhanVienMoi);
        }
        if(type == 2)
        {
            string maNhanVien , hoTen;
            double luongCoBan , phuCapChucVu;
            
            cout << "Hay nhap ma nhan vien: ";
            cin >> maNhanVien;

            cout << "Hay nhap ho ten: ";
            cin >> hoTen;

            cout << "Hay nhap luong co ban: ";
            cin >> luongCoBan;

            cout << "Hay nhap phu cap chuc vu: ";
            cin >> phuCapChucVu;

            NhanVien* nhanVienMoi = new Quanly(maNhanVien , hoTen , luongCoBan , phuCapChucVu);
            myComp.themNhanVien(nhanVienMoi);
        }
        if(type == 3)
        {
            myComp.hienThiTatCa();
            myComp.tinhTongQuyLuong();
        }
        if(type == 4)
        {
            cout << "Hay nhap ma nhan vien: ";
            string ma;
            cin >> ma;
            myComp.timKiemTheoMa(ma);
        }
        if(type == 0)
        {
            myComp.~Congty();
            break;
        }
    }
    return 0;
}