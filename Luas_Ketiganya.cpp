#include<iostream>
#include<math.h>

using namespace std;

//Deklarasi
int main(){

int no;
float a, b, c, d;


//Algoritma

cout<<"==================================================================="<<endl;
cout<<"         Selamat Datang Dikalkulator Luas Bangun Datar             "<<endl;
cout<<"==================================================================="<<endl<<endl;
cout<<"            !! Silahkan Ikuti Langkah-langkah Berikut !!           "<<endl<<endl;

cout<<"Masukkan Pilihan Anda (dengan angka)\n"<<"1) Segi Empat\n"<<"2) Segitiga Siku-siku"<<endl;
cout<<"3) Lingkaran"<<endl;
cin>>no;
cout<<endl;

    if(no == 1){
        cout<<"====================Kalkulator Luas Segi Empat====================="<<endl<<endl;
        cout<<"Masukkan Input Berikut"<<endl<<endl;
        cout<<"Panjang (cm) = "<<endl;
            cin>>a;
        cout<<"Lebar (cm) = "<<endl;
            cin>>b;
        c = a*b;
        cout<<"Luas Dari Segiempat = "<<c<<" cm"<<endl;
        cin.get();
    
    }

    else if(no == 2){
        cout<<"=================Kalkulator Luas Segitiga Siku-Siku================"<<endl<<endl;
        cout<<"Masukkan Input Berikut"<<endl<<endl;
        cout<<"Alas (cm) = "<<endl;
            cin>>a;
        cout<<"Tinggi (cm) = "<<endl;
            cin>>b;
        c = a*b/2;
        cout<<"Luas Dari Segitiga = "<<c<<" cm"<<endl;
        cin.get();
    }

    else if(no == 3){
        cout<<"======================Kalkulator Luas Lingkaran===================="<<endl<<endl;
        cout<<"Masukkan Input Berikut"<<endl<<endl;
        cout<<"Jari-jari (cm)= "<<endl;
            cin>>a;

        b = 3.14;
        c = pow(a,2);
        d = b*c;

        cout<<"Luas Lingkaran = "<<d<<" cm"<<endl;
        cin.get();
    
    }

    else{
        cout<<"Maaf, Angka yang anda masukkan tidak valid"<<endl;
        cin.get();
    }
    
    cout<<"==================================================================="<<endl;
    cout<<"             Terimakasih Telah Menggunakan Kalulator ini           "<<endl;
    cout<<"                   Mohon Maaf Jika Ada Kesalahan                   "<<endl;
    cout<<"==================================================================="<<endl;


	cin.get();
	
    return 0;
}
