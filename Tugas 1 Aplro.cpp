#include <iostream>
#include <string>
using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

int main(){
    string nama_penjaga, jenis, code;
    data_BBM BBM;
    string kode_BBM[2]={"1", "2"};
    string nama_BBM[2]={"Pertalite", "Pertamax"};
    int jml_uang, kembali, total=0;
    float liter, harga, uang;
    
    cout << "======================================="<<endl;
    cout << "     Selamat Datang di SPBU            "<<endl;
    cout << "   Jalan Vitalis Djebarus Labuan       "<<endl;
    cout << "======================================="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode         Jenis BBM         Harga   "<<endl;
    cout << " 1           Pertalite     Rp. 7.000,00"<<endl;
    cout << " 2           Pertamax      Rp. 9.000,00"<<endl;
    cout << "---------------------------------------"<<endl;
    
    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[1]<<endl;
        cout << "Rp. 7.000/liter";
        jenis = "Pertalite";
        harga = 7000;
        nama_penjaga = "Zaki";
    }
	else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[2]<<endl;
        cout << "Rp. 9.000/liter";
        jenis = "Pertamax";
        harga = 9000;
        nama_penjaga = "Eska";
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout << "Beli       : "; cin >> uang;
        cout << "Bayar      : "; cin >> jml_uang;
        total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
	
    cout << "                   -PERTAMINA-                        "<<endl;
    cout << "                 -SPBU INDONESIA-                     "<<endl;
    cout << "        -Jl. Vitalis Djebarus Labuan Bajo-            "<<endl;
    cout << "------------------------------------------------------"<<endl;
    cout << "Jenis BBM      : "<<jenis<<endl;
    cout << "Liter          : "<<liter<<endl;
    cout << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout << "Total          : Rp. "<<total<<",00"<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    cout << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    cout << "======================================================"<<endl;
    cout << "Operator       : "<<nama_penjaga<<endl;
    cout << "           TERIMA KASIH DAN SELAMAT JALAN              ";
	
    return 0;
}
