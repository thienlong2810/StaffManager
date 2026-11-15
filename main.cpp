#include <bits/stdc++.h>
#include "staff.cpp"
using namespace std;

int main()
{
    NhanVien* nv = new LapTrinhVien("001" , "Thien Long" , 30'000'000 , 20);
    nv->hienThi();
    delete nv;
    return 0;
}