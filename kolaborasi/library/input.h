using namespace std;

class Input
{
public:
    void cetak()
  {
  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  

  	cout<<"MENU PAKET:       "<<endl;  
  	cout<<"1. Ayam Geprek  : Rp. 21000 "<<endl;  
  	cout<<"2. Ayam Goreng  : Rp. 17000 "<<endl;
  	cout<<"3. Udang Goreng : Rp. 19000 "<<endl;
  	cout<<"4. Cumi Goreng  : Rp. 20000 "<<endl;
  	cout<<"5. Ayam Bakar   : Rp. 25000 "<<endl;

	  cout<<"==========================="<<endl;
    cout<<"Pesan Ayam Geprek ?(y/t) ";
    cin>>a;
    	if (a=='y') {
		  cout<<"Masukkan Jumlah Pesanan : ";
       cin>>geprek;
      }
      else {
	  	cout<<"Pesanan Ayam Geprek = 0\n";
	  	geprek=0;
	    }
	  /*  cout<<"Pesan Ayam Goreng ?(y/t) ";
	    cin>>b;
	    if (b=='y') {
	  	cout<<"Masukkan Jumlah Pesanan : ";
	  	cin>>goreng;
      }
      else {
		  cout<<"Pesanan Ayam Goreng = 0\n";
		  goreng=0;
	    }
      cout<<"Pesan Udang Goreng ?(y/t) ";
	    cin>>c;
	    if (c=='y') {
		  cout<<"Masukkan Jumlah Pesanan : ";
		  cin>>udang;
      }*/
      
    void toFile()
  {
    tulis_data.open("../pradata/input.txt");
    tulis_data<<a<<endl;
    tulis_data<<geprek<<endl;
    tulis_data<<b<<endl;
    tulis_data<<goreng<<endl;
    tulis_data<<c<<endl;
    tulis_data<<udang<<endl;
    tulis_data<<d<<endl;
    tulis_data<<cumi<<endl;
    tulis_data<<e<<endl;
    tulis_data<<bakar;
    tulis_data.close();
  }
private:
  ofstream tulis_data;
  	long bakar,goreng,geprek,udang,cumi, biaya, diskon,   biayatotal, bayar, kembalian;  
  	int jumlah,jarak,pajakjarak;  
  	char a,b,c,d,e;
};