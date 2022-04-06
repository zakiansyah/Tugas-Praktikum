#include <iostream>
using namespace std;

class Proses {
  public :
    void cetak() {
      cout <<"Ini adalah bagian proses"<<endl;
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
    }
    void getdata() {
      ambildata.open("../dummy/input.txt");
      bool ayamgeprek = true;
      bool ayamgoreng = true;
      bool udang = true;
      bool cumi = true;
      bool ayambakar = true;
      while(!ambildata.eof()) {
        if (ayamgeprek) {
          ambildata>>jmlgeprek;
          ayamgeprek = false;
        }
        else if (ayamgoreng) {
          ambildata>>jmlgoreng;
          ayamgoreng = false;
        }
        else if (udang) {
          ambildata>>jmludang;
          udang = false;
        }
        else if (cumi) {
          ambildata >> jmlcumi;
          cumi = false;
        }
        else {
          ambildata >> jmlbakar;
        }

      }
      ambildata.close();
    }
    void tofile () {
      int total = (jmlgeprek * ayamgeprek) + (jmlgoreng*ayamgoreng) + (jmludang * udang) + (jmlcumi*cumi) + (jmlbakar + ayambakar);
      float batas1 = 25000;
      float batas2 = 50000;
      float batas3 = 150000;
      float btsjarak;
      float diskon1 = total * 0.15;
      float diskon2 = total * 0.35;
      float jarak;
      float total2 = float(total);
      float diskonx;
      
      if(btsjarak<3) {
        jarak=15000;
      }
      else if(btsjarak>=3) {
        jarak=25000;
      }
      
      if (total >= batas1) {
        jarak=jarak-3000;
        total2=total+jarak;
      }
      else if (total>=batas2) {
        jarak=jarak-5000;
        total2 = total-diskon1;
        total2 = total2+jarak;
        diskonx = diskon1;
      }
      else if (total>=batas3) {
        jarak=jarak-8000;
        total2 = total-diskon2;
        total2 = total2+jarak;
        diskonx = diskon2;
      }

      tulisdata.open("../pradata/proses.txt");
      tulisdata<<total2<<endl;
      tulisdata<<diskonx<<endl;
      tulisdata<<total2<<endl;
      tulisdata.close();
    }
  private :
    ifstream ambildata;
    int jmlgoreng,jmlbakar,jmludang,jmlcumi,jmlgeprek;
    int ayamgeprek = 21000;
    int ayamgoreng = 17000;
    int udang = 19000;
    int cumi = 20000;
    int ayambakar = 25000;
    
};