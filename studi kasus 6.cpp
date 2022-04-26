#include <iostream>
using namespace std;

// Deklarasi Variabel
class mahasiswa{
	public:
	int nilai[5];
int jml_nilai = 0;
int rata_rata = 0;
int nilai_max = 0;
int nilai_min = 100;
};
//Array berjumlah 5


// Deklarasi Main
int main()
{
	mahasiswa.mhs;
cout <<"===================" << endl;
cout <<"Masukkan nilai mahasiswa :"<< endl;
cout <<	"==================" << endl;
// Looping Array
for (int index=0;index<5;index++)
{
//Menginput nilai mahasiswa
cout << "Nilai Mahasiswa ke   "<< index+1 << ":";
cin >> mhs.nilai[index];

//Menjumlahkan nilai mahasiswa
mhs.jml_nilai = mhs.jml_nilai + mhs.nilai[index];

//Membandingkan nilai terbesar
if mhs.(nilai_max < mhs.nilai[index])
{
mhs.nilai_max = mhs.nilai[index];
}

//Membandingkan nilai terkecil
else if (mhs.nilai_min > mhs.nilai[index])
{
mhs.nilai_min = mhs.nilai[index];
}
}
cout <<"===================" << endl;
//Menampilkan jumlah nilai mahasiswa
cout << "Jumlah nilai mahasiswa \t\t"<<"= " <<mhs.jml_nilai << endl;

//Menghitung rata-rata nilai mahasiswa
mhs.rata_rata = mhs.jml_nilai/5;

//Menampilkan nilai rata mahasiswa
cout << "Rata-rata nilai mahsiswa \t"<<"="  <<mhs.rata_rata << endl;

//Menampilkan nilai tertinggi mahasiswa
cout << "Nilai tertinggi mahasiswa \t"<<"= " <<mhs.nilai_max << endl;

//Menampilakn nilai terendah mahasiswa
cout << "Nilai terendah mahasiswa \t"<<"="  <<mhs.nilai_min << endl;
cout <<"======================" << endl;
}