#include <iostream>
#include <string.h>
using namespace std;

class program{
public:
  int Barang();
  int Sorting();
  int Searching();
private:
  string nama[30];
  int barang[30];
  char stok[30];
  int id,n,i;
};

int program::Barang(){
cout<<"Masukan berapa barang : "; cin>>n;
for(int v=0; v<=n; v++){
  cout<<"Data ke- "<<(v+1)<<":"<<endl;
  cout<<"Masukan id barang : "; cin>>barang[i];
  cout<<"Masukan Nama barang : "; cin>>nama[i];
  cout<<"Masukan Stok barang : "; cin>>stok[i];
}
}

int program::Sorting(){
  int barang[i];
  int lenght=sizeof(barang)/sizeof(*barang);
  int temp;
  for(int a = 1; a<lenght; a++){
    for(int b = 0; b<lenght; b++){
      if(barang[b]>barang[b+1]){
        temp=barang[b];
        barang[b] = barang[b+1];
        barang [b+1] = temp;
      }
    }
  }
  cout<<"Hasil sorting : "<<endl;
  for(int x = 0; x,lenght; x++){
    cout<<barang[x]<<endl;
  }
}
int program::Searching(){
    cout<<"==Selamat datang pada pencarian barang!!=="<<endl<<endl;
    int caridata;
    int flag, i;
    cout<<"Masukkan barang yang ingin Anda cari : ";
    cin >> caridata;
    //cari dengan metode sequential search()
    for(i=0; i<n; i++){
        if(barang[i]==caridata){
            flag = 1;
        }
	}
	//cetak hasil
    if(flag==1){
    	cout<<"Barang ditemukan pada indek ke-"<<i<<endl;
      	}else{
        cout<<"Barang tidak ditemukan"<<endl;
      }
}

int main(){
  program x;
  x.Barang();
  cout<<endl;
  x.Sorting();
  cout<<endl;
  x.Searching();
  cout<<endl;
  return 0;
}