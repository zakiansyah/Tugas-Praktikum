class Output {
  public:
    void cetak(){
      cout << "stuk pembelian makanan\n";
      cout << "yang dibeli :\n";
      cout << "  ayam geprek = "<<data_file[3]<<endl;
      cout << "  ayam goreng = "<<data_file[4]<<endl;
      cout << "  udang goreng = "<<data_file[5]<<endl;
      cout << "  cumi goreng = "<<data_file[6]<<endl;
      cout << "  ayam bakar = "<<data_file[7]<<endl;
      cout << " Harga total = "<<data_file[0]<<endl;
      cout << " Diskon = "<<data_file[1]<<endl;
      cout << " Uang yang harus dibayar = "<<data_file[2]<<endl;
    }
    void getData(){
      ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
        ambil_data >> data_file[index];
        index += 1;
        cout <<"data file" <<data_file[index]<<endl;
      }
      ambil_data.close();
    }

  private:
  ifstream ambil_data;
  string data_file[50];
  int index = 0;
};