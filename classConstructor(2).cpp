#include <iostream> 
using namespace std; 

// membuat class dengan constructor
class sekolahSmkAkh{
  public: 
    string Nama, Jurusan;
    int nomorAbsen;
    sekolahSmkAkh(string name,string jurus){
      sekolahSmkAkh::Nama = name;
      sekolahSmkAkh::Jurusan = jurus;
      cout << "Nama : "  << sekolahSmkAkh::Nama << endl;
      cout << "Jurusan : " << sekolahSmkAkh::Jurusan << endl;
    }
    
};
int main(){
  // nama dan jurusan 
  sekolahSmkAkh data = sekolahSmkAkh("Lucas fanrtoen ","Rekayasa Perangkat Lunak ");
  sekolahSmkAkh data = sekolahSmkAkh("Sacul ","Teknik Pengelasan ");
  return 0;
}