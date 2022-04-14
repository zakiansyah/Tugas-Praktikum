#include<iostream>
using namespace std;
class pengeluaran{
public:
	long uang_saku();
	int i;
private:
	int n, a, spp, nabung , jjn, total;
};

long pengeluaran::uang_saku(){
	cout<<"masukan uang dalam satu bulan = "; cin>>n;
  	cout<<"masukan total pembayaran spp satu bulan = "; cin>>spp;
 	cout<<"jajan dalam satu bulan = "; cin>>jjn;
  	total=n-spp-jjn;
  	cout<<"sisa uang atau tabungan = ";
  	return total ;
}

int main(){
	pengeluaran b;
	cout<<b.uang_saku();
  	cout<<endl;
	
}