#include <iostream>
#include <string>
using namespace std;

class kelasX{
  public :
    string Nama, Jurusan;
    int nomorAbsen;
    kelasX(string name, string jurus,int noAbs){
      kelasX::Nama = name;
      kelasX::nomorAbsen = noAbs;
      kelasX::Jurusan =jurus;
    }
    void Tampilkan(){
      cout << "Nama : " << Nama << endl;
      cout << "Jurusan : " << Jurusan << endl;
      cout << "Nomor absen : " << nomorAbsen << endl;
    }
    string ubahNama(const char* newName){
      kelasX::Nama = newName;
    }
    string ubahJurusan(const char* newJurusan){
      kelasX::Jurusan = newJurusan;
    }
    int ubahNomorAbsen(const int nA){
    	kelasX::nomorAbsen = nA;
    }
    
    string getName(){
      return kelasX::Nama;
    }
    string getJurusan(){
      return kelasX::Jurusan;
    }
    int getNomorAbsen(){
    	return kelasX::nomorAbsen;
    }
};

int main(){
  
  kelasX dataKelas = kelasX("Lucas R.","Rekayasa perangkat lunak",20);
  dataKelas.Tampilkan();
  cout << endl;
  cout << "Setelah di ubah nama : \n " << endl;
  dataKelas.ubahNama("Iron man.");
  dataKelas.Tampilkan();
  
  string dataNama = dataKelas.getName();
  cout << "dataNama : " << dataNama << endl;
  return 0;
}
