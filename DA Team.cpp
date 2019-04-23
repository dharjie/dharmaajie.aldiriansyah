#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
//DHARMA AJIE NUR ROIS       (1810631170120)
//ALDIRIANSYAH DWI FEBRIANTO (1810631170084)


void menu();
void daftarharga();
void beli();

main()
{
    char id[20], pw[20], ulang;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-=-=-=-=Selamat Datang di Toko DA TEAM-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"Silahkan Login ke akun Anda"<<endl;
    cout<<"ID\t\t: ";cin>>id;
    cout<<"Password\t: ";cin>>pw;
    menu();
    getch();
}

void menu()
{
    int p;
    char b, cb;
    system("cls");
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-=-=-=-=Selamat Datang di Toko DA TEAM-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"\n\t  1. Cek Daftar Harga Barang"<<endl;
    cout<<"\t  2. Pembelian Barang"<<endl<<endl<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl;
    cout<<"\t  Silahkan Masukkan Pilihan Anda [1/2] : "; cin>>p;
    if(p==1)
        {
            daftarharga();
            cout << "\nTekan B untuk kembali ke menu : ";
            cin >> b;
            if(b == 'b' || b == 'B')
            {
                menu();
            }
            else
            {
                cout<<"Maaf, input Anda salah"<<endl;
                cout<<"\n\tIngin kembali ke Menu?"<<endl;
                cout<<"\tTtekan [Y] Jika YA   : ";cin>>cb;
                if(cb=='y' || cb=='Y')
                {
                    menu();
                }
                else
                {
                    cout<<"\n\tTerimakasih telah mengunjungi Toko DA Team"<<endl;
                }
            }

        }
    else if(p==2)
        {
            beli();
        }
    else
        {
            cout<<"\tMaaf, input Anda salah"<<endl;
            cout<<"\n\tIngin kembali ke Menu?"<<endl;
            cout<<"\tTtekan [Y] Jika YA   : ";cin>>cb;
            if(cb=='y' || cb=='Y')
            {
                menu();
            }
            else
            {
                cout<<"\n\tTerimakasih telah mengunjungi Toko DA Team"<<endl;
            }
        }
    }

void daftarharga()
{

    system("cls");
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-="<<endl;
    cout<<"-=-=-=-=-=-=-=-=-=-=  Daftar Produk Toko DA TEAM  =-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-="<<endl<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|  Kode Nomor |   Nama Produk   |      Brand      |       Harga      |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|      1      |        HP       |   1. Samsung    |    Rp. 10 juta   |"<<endl;
    cout<<"|             |                 |   2. Apple      |    Rp. 30 juta   |"<<endl;
    cout<<"|             |                 |   3. Xiaomi     |    Rp. 4 juta    |"<<endl;
    cout<<"|             |                 |   4. Huawei     |    Rp. 12 juta   |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|      2      |        AC       |   1. Samsung    |    Rp. 3 juta    |"<<endl;
    cout<<"|             |                 |   2. LG         |    Rp. 4 juta    |"<<endl;
    cout<<"|             |                 |   3. Panasonic  |    Rp. 2 juta    |"<<endl;
    cout<<"|             |                 |   4. Sharp      |    Rp. 2 juta    |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|      3      |        TV       |   1. Samsung    |    Rp. 7 juta    |"<<endl;
    cout<<"|             |                 |   2. LG         |    Rp. 4 juta    |"<<endl;
    cout<<"|             |                 |   3. Sony       |    Rp. 5 juta    |"<<endl;
    cout<<"|             |                 |   4. Toshiba    |    Rp. 6 juta    |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|      4      |      Laptop     |   1. Acer       |    Rp. 5 juta    |"<<endl;
    cout<<"|             |                 |   2. Toshiba    |    Rp. 5 juta    |"<<endl;
    cout<<"|             |                 |   3. Asus       |    Rp. 4 juta    |"<<endl;
    cout<<"|             |                 |   4. HP         |    Rp. 7 juta    |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
}

void beli()
{
    system("cls");
    char u, *produk, *merek, ulang, ks, b;
    int p, jp, jumlah;
    float harga;
    daftarharga();
    cout<<"Masukkan Kode Nomor (1-4)   : ";
    cin>>ks;
    cout<<"Masukkan Nama Brand (1-4)   : ";
    cin>>u;
    cout<<"Masukkan Jumlah Pembelian   : ";
    cin>>jp;

    switch (ks)
    {
    case '1':
        produk="HP";
        if(u=='1')
        {
            merek="Samsung";
            harga=10;
        }
        else if(u=='2')
        {
            merek="Apple";
            harga=30;
        }
        else if(u=='3')
        {
            merek="Xiaomi";
            harga=4;
        }
        else if(u=='4')
        {
            merek="Huawei";
            harga=12;
        }
        else
        {
            cout<<"Maaf, input Anda Salah"<<endl;
        }
    break;
    case '2':
        produk="AC";
        if(u=='1')
        {
            merek="Samsung";
            harga=3;
        }
        else if(u=='2')
        {
            merek="LG";
            harga=4;
        }
        else if(u=='3')
        {
            merek="Panasonic";
            harga=2;
        }
        else if(u=='4')
        {
            merek="Sharp";
            harga=2;
        }
        else
        {
            cout<<"Maaf, input Anda Salah"<<endl;
        }
    break;
    case '3':
        produk="TV";
        if(u=='1')
        {
            merek="Samsung";
            harga=7;
        }
        else if(u=='2')
        {
            merek="LG";
            harga=4;
        }
        else if(u=='3')
        {
            merek="Sony";
            harga=5;
        }
        else if(u=='4')
        {
            merek="Toshiba";
            harga=6;
        }
        else
        {
            cout<<"Maaf, input Anda Salah"<<endl;
        }
    break;
    case '4':
        produk="Laptop";
        if(u=='1')
        {
            merek="Acer";
            harga=5;
        }
        else if(u=='2')
        {
            merek="Toshiba";
            harga=5;
        }
        else if(u=='3')
        {
            merek="Asus";
            harga=4;
        }
        else if(u=='4')
        {
            merek="HP";
            harga=7;
        }
        else
        {
            cout<<"Maaf, input Anda Salah"<<endl;
        }
    break;
    }

    system("cls");
    jumlah=jp*harga;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl;
    cout<<"-=-=-=-=-=-=-Anda telah melakukan transaksi di Toko DA TEAM-=-=-=-=-=-="<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl<<endl<<endl;
    cout<<"         Anda membeli produk  : "<<produk<<endl;
    cout<<"         Merek "<<produk<<"\t      : "<<merek<<endl;
    cout<<"         Harga                : Rp. "<<harga<<" Juta"<<endl;
    cout<<"         Jumlah Pembelian     : "<<jp<<endl;
    cout<<"         Total Harga          : Rp. "<<jumlah<<" Juta"<<endl<<endl<<endl;
    cout<<"-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"Apakah anda ingin melakukan transkasi lagi?"<<endl;
    cout<<"Tekan [Y] jika YA"<<endl;
    cin>>ulang;
    if(ulang=='y'||ulang=='Y')
    {
        menu();
    }
    else
    {
        cout<<"Terimakasih telah mengunjungi Toko DA Team"<<endl;
        cout<<"Semoga Anda puas berbelanja disini"<<endl;
    }

}
