#include <iostream> 
#include <string> 
using namespace std; 

class kelasRpl{
  public :
    string nama;
    int nomorAbsen;
  private :
};

int main(){
  kelasRpl data;
  data.nama = "Lucas Renanda";
  data.nomorAbsen = 20;
  cout << "Nama : " << data.nama << endl;
  cout << "Nomor Absen : " << data.nomorAbsen << endl;
  return 0;
}