#include <iostream>
#include <cstring>
using namespace std;
string repeat(string k,int jumlah){
	string repeat;
	if(k.length() == 0){
		repeat = "Null";
		return repeat;
	}
  for(int i = 0 ; i < jumlah;i++){
    repeat += k;
  }
  return repeat;
}
void menu(){
  cout << repeat("=" ,40) << endl;
  cout << "1.penjumalahan " << endl;
  cout << "2.pengurangan " << endl;
  cout << "3.perkalian " << endl;
  cout << "4.pembagian " << endl;
  cout << repeat("=" ,40) << endl;
}
int main(){
  y:
  menu();
  int in,an1,an2 ;
  // 
 
  do{
  cout << "Masukan angka [1-4] : " ;
  cin >> in;
  }
  while(in > 4 || in < 1);
  switch(in){
    case 1:
      cout << "masukan angka pertama : ";
      cin >> an1 ;
      cout << "masukan angka kedua : ";
      cin >> an2 ;
      cout << "Hasil penjumlahan (" << an1 << ") + (" << an2 << ") adalah " << an1 + an2 << endl;
    break;
    case 2:
      cout << "masukan angka pertama : ";
      cin >> an1 ;
      cout << "masukan angka kedua : ";
      cin >> an2 ;
      cout << "Hasil pengurangan (" << an1 << ") - (" << an2 << ") adalah " << an1 - an2 << endl;
    break;
    case 3:
      cout << "masukan angka pertama : ";
      cin >> an1 ;
      cout << "masukan angka kedua : ";
      cin >> an2 ;
      cout << "Hasil perkalian (" << an1 << ") x (" << an2 << ") adalah " << an1 * an2 << endl;
    break;
    case 4:
      cout << "masukan angka pertama : ";
      cin >> an1 ;
      cout << "masukan angka kedua : ";
      cin >> an2 ;
      cout << "Hasil penjumlahan (" << an1 << ") ÷ (" << an2 << ") adalah " << an1 / an2 << endl;
    break;
  }
  string yn;
  cout << "ingin lagi? y/n ";
  cin >> yn;
  if(yn == "y"){
  	goto y;
  }
  else if(yn == "n"){
  	return 0;
  }
  
  
  
}