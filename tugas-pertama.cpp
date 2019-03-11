#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
int n=0,j=1,cari;
int maxs;

struct Mahasiswa
{
    int nim;
    string nama;
    string kelamin;
    string jurusan;
    float nilai1,nilai2,nilai3,nilai;
}mhs[500];


void tambah_mhs(Mahasiswa)
{
    double rata,nilai1,nilai2,nilai3;
    for(int n=1;n<6;n++){
        cout<<"======================"<<endl;
        cout<<"Data Mahasiswa ke "<<n<<endl;
        cout<<"----------------------"<<endl;
    cout<<"Masukkan Nomor Induk Mahasiswa (NIM) : ";cin>>mhs[n].nim;
    cout<<"Masukkan Nama Lengkap Mahasiswa : ";cin>>mhs[n].nama;
    cout<<"Masukkan Jenis Kelamin : ";cin>>mhs[n].kelamin;
    cout<<"Masukkan Jurusan : ";cin>>mhs[n].jurusan;
    cout<<"Masukkan Nilai Harian 1 : ";cin>>mhs[n].nilai1;
    cout<<"Masukkan Nilai Harian 2 : ";cin>>mhs[n].nilai2;
    cout<<"Masukkan Nilai Harian 3 : ";cin>>mhs[n].nilai3;
    cout<<"Rata-rata= "<<rata<<endl;
    rata=(nilai1+nilai2+nilai3)/3;
    cout<<"------------------- "<<endl;
    n++;
    }
}
void maxs_mhs(Mahasiswa)
{
    int max;
    cout<<"------------------- "<<endl;
    cout<<"Tampil Rata-rata tertinggi"<<endl;
        maxs=mhs[n].nilai;
    for (int n=1;n<6;n++){
    if(mhs[n].nilai>max){
    max=mhs[n].nilai;
    }
    }
    cout<<"nilai rata-rata tertinggi adalah : "<<max<<endl;
    cout<<"--------------------"<<endl;
}


void cari_mhs(Mahasiswa){
bool ada=false;
cout<<"Masukan Nim yang akan dicari= ";cin>>cari;
if(ada){
    cout<<"Nim "<<mhs[n].nim<<"Ditemukan"<<endl;
    }else{cout<<"Data tidak ditemukan"<<endl;}
}
int main(){
    int pilih=1;
    do {system ("cls");
        cout<<"====================="<<endl;
        cout<<"        MENU : "<<endl;
        cout<<"====================="<<endl;
        cout<<"1. Input data Mahasiswa"<<endl;
        cout<<"2. Tampil Berdasarkan Rata-rata Tertinggi"<<endl;
        cout<<"3. Pencarian Berdasarkan NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"---------------------"<<endl;
    cout<<"Pilih menu: ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(j==10){cout<<"Kelas sudah penuh"<<endl;} else{tambah_mhs(mhs[500]);};break;}
        case 2:{if(j==10){cout<<"Kelas sudah penuh"<<endl;} else{maxs_mhs(mhs[500]);};break;}
        case 3:{if(j==10){cout<<"Kelas sudah penuh"<<endl;} else{cari_mhs(mhs[500]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"Salah pilih menu "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);

}




