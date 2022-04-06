#include <iostream>
#include <fstream>
#include "../library/proses.h"
using namespace std;

int main () {
  Proses proses;
  proses.cetak();
  proses.getdata();
  proses.tofile();
  return 0