#include <iostream>

inr main ( ) {
  float a = 10;
  std::cout << " NILAI AWAL VARIABEL A ADALAH  \n \n" << a << std::endl;
  //jika operator assignment sudah dilakukan dan akan menggunakan-nya untuk kedua kali-nya maka operator assignment kedua mengambil data untuk di operasikan dari hasil yang sebelum nya
  a += 3;
  std::cout << " NILAI VARIABEL A SETELAH DITAMBAH ADALAH " << a << std::endl;
  a -= 3;
  std::cout << " NILAI VARIABEL A SETELAH DIKURANG ADALAH " << a << std::endl;
  a /= 3;
  std::cout << " NILAI VARIABEL A SETELAH DIBAGI ADALAH " << a << std::endl;
  a *= 3;
  std::cout << " NILAI VARIABEL A SETELAH DIKALI ADALAH " << a << std::endl;
  std::cin.get();
  return 0;
}