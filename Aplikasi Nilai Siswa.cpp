#include <iostream>
using namespace std;

int main(){
float quiz,uts,uas,nilaiakhir,rata;
char huruf;
string lagi="Ya";
cout << "=========================================" << endl;
cout << "    Aplikasi Penghitung Nilai Siswa      " << endl;
cout << "      By: Primavieri Rhesa Ardana        " << endl;
cout << "         NIM : A11.2022.14557            " << endl;
cout << "=========================================" << endl;
while (lagi == "Ya"){


cout << "Silahkan Masukkan Nilai Quiz : ";
cin >> quiz;
cout << "Silahkan Masukkan Nilai Uts  : ";
cin >> uts;
cout << "Silahkan Masukkan Nilai Uas  : ";
cin >> uas;

rata=(quiz+uts+uas)/3;
nilaiakhir=(0.25 * quiz) + (0.35 * uts) + (0.4 * uas);


if (nilaiakhir >= 80){
    huruf='A';
} else if (nilaiakhir >=68) {
    huruf='B';
} else if (nilaiakhir >=55) {
    huruf='C';
} else if (nilaiakhir >=45) {
    huruf='D';
} else {
    huruf='E';
}

cout << "Nilai Rata-Rata Anda Adalah  : " << rata << endl;
cout << "Nilai Akhir Anda Adalah      : " << nilaiakhir << endl;
cout << "Predikat Nilai Anda Adalah   : " << huruf << endl;

if (rata >= 60){
cout << "Selamat Anda Lulus" << endl;
} else {
cout << "Maaf Anda Gagal" << endl;
}
cout << "Mau Menghitung Lagi? (Ya/tidak) : ";
cin  >> lagi;
cout << "=========================================" << endl;
}
cout << "Terima Kasih Telah Menggunakan :> ";


return 0;
}
