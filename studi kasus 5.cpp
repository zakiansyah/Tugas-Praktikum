#include<iostream>
#include<string.h>

using namespace std;
class mahasiswa{
public:
	long pembayaran();
	int biodata();
  
private:
	int  jml_sks, ttl_byr;
	string n;
	long nim;
};
int mahasiswa::biodata(){
	cout<<"nama : "; cin>>n;
	cout<<"NIM 	: "; cin>>nim;
	cout<<"nama : "<<n<<endl;
	cout<<"NIM	: ";
	return nim;
	
}


long mahasiswa::pembayaran(){
  cout<<"masukan jumlah sks : "; cin>>jml_sks;
  cout<<"harga per sks = Rp.120.000"<<endl;
  cout<<"diskon 15%"<<endl;
  ttl_byr = jml_sks*120000*15/100;
  return ttl_byr;
  
  
}

int main(){

	mahasiswa b;
	cout<<b.biodata();
	cout<<endl;
  cout<<b.pembayaran();
  cout<<endl;
  
	
}