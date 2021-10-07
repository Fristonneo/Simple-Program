#include<iostream>

using namespace std;

void garis( int banyak ){

    for (int i = 0; i < banyak; i++)
        printf("=");
    printf("\n"); 
    }

int main(){
    
    float a, b, hasil;
    char aritmatika;

    garis (50);
    cout << "!! Selamat Datang Dikalkulator Sederhana !!\n";
    garis (50);

    cout << "Masukkan Angka Pertama = ";
    cin >> a;
    cout << "Masukkan Operator Perhitungan (+, -, /, *) = ";
    cin >> aritmatika;
    cout << "Masukkan Angka Kedua = ";
    cin >> b;

    switch (aritmatika){
        case '+' :
            hasil = a + b;
            garis (50);
            cout << "Hasil Perhitungan\n";
            cout << a << " " << aritmatika << " " << b ;
            cout << " = " << hasil;
            break;
         case '-' :
            hasil = a - b;
            garis (50);
            cout << "Hasil Perhitungan\n";
            cout << a << " " << aritmatika << " " << b ;
            cout << " = " << hasil;
            break;
        case '/' :
            hasil = a / b;
            garis (50);
            cout << "Hasil Perhitungan\n";
            cout << a << " " << aritmatika << " " << b ;
            cout << " = " << hasil;
            break;
        case '*' :
            hasil = a * b;
            garis (50);
            cout << "Hasil Perhitungan\n";
            cout << a << " " << aritmatika << " " << b ;
            cout << " = " << hasil;
            break;
        default :
            garis(50);
            cout << "Maaf, Operator anda salah !\n";
            break;
    }
    cout << "\n";
    garis(50);

    cin.get();
}
