#include <iostream>
#include <string.h>
using namespace std;

class Operator{
   public :
      void input();
      void proses();
      void output();

   private : 
        int kodebuku[100], k, n, tmp, rak[10][10];
};

void Operator::input(){
  cout<<"Masukkan Banyaknya Buku : "; cin >> n;
  for(int i=1; i<=n; i++){
		cout<<"Data buku ke-"<<i<<" = ";
		cin>>kodebuku[i];
	}
  cout<<"\n\n------Susunan Buku sebelum dirapihkan-------\n";
		for(int j=1; j<=n; j++){
			cout<<"  "<<kodebuku[j];
		}  
  cout<<"\n-------------------------------------------\n";
};

void Operator::proses(){
  //Sorting
  for(int i=1; i<=24; i++){
	        for(int j=i; j<=24; j++){
	            if(kodebuku[i] > kodebuku[j]){
	                    tmp = kodebuku[j];
	                    kodebuku[j] = kodebuku[i];
	                    kodebuku[i] = tmp;
	        	}
	        }
	}
  //Mengubah array 1D ke 2D
  k=1;
  for (int i=1; i<=4; i++){
		for (int j=1; j<=6; j++){
		rak[i][j]=kodebuku[k];
		k++;
		}
	}
}

void Operator::output(){
  cout<<"\n------Susunan Buku sesudah dirapihkan-------\n";
  for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			cout<<"Buku Kode "<<rak[i][j]<<" | ";
		}
    cout<<endl;
	}
};

int main(){
  Operator run;
  run.input();
  cout << endl;
  run.proses();
  cout << endl;
  run.output();
  cout << endl;
  return 0;
  
}