#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int uangBayar, uangKembali, waktu, flag = 0, total;
char  choose, pilih, paket_i, paket_t;
string jenis, nama;

class InapKucing
{
    public:
    int hargaInap, hargaTreatment, waktuk, biaya;
    char  paket_ik, paket_tk;

    void hargaInapK(char, int) //harga inap kucing
    {
        paket_ik = paket_i;
        waktuk = waktu;

        if (paket_ik == 'A' || paket_ik == 'a')
        {
            hargaInap = waktuk*15000;
        }else if (paket_ik == 'B' || paket_ik == 'b')
        {
            hargaInap = waktuk*10000;
        }
        else if (paket_ik == 'C' || paket_ik == 'c')
        {
            hargaInap = waktuk*12000;
        }
    }

    void hargaTreatmentK(char) //harga treatment kucing
    {
        paket_tk = paket_t;

        if (paket_tk == 'A' || paket_tk == 'a')
        {
            hargaTreatment = 40000;
        }else if (paket_tk == 'B' || paket_tk == 'b')
        {
            hargaTreatment = 55000;
        }else
        {
            hargaTreatment = 0;
        }
    }

    int biayaK()
    {
        biaya = hargaInap + hargaTreatment;
        return biaya;

    }
};

class InapAnjing
{
    public:
    int hargaInap, hargaTreatment, waktua, biaya;
    char  paket_ia, paket_ta;

    void hargaInapA(char, int) //harga inap anjing
    {
        waktua = waktu;
        paket_ia= paket_i;

        if (paket_ia == 'A' || paket_ia == 'a')
        {
            hargaInap = waktua*20000;
        }else if (paket_ia == 'B' || paket_ia == 'b')
        {
            hargaInap = waktua*10000;
        }
        else if (paket_ia == 'C' || paket_ia == 'c')
        {
            hargaInap = waktua*12000;
        }
    }

    void hargaTreatmentA(char) //harga treatment anjing
    {
        paket_ta = paket_t;
        if (paket_ta == 'A' || paket_ta == 'a')
        {
            hargaTreatment = 45000;
        }else if (paket_ta == 'B' || paket_ta == 'b')
        {
            hargaTreatment = 60000;
        }else
        {
            hargaTreatment = 0;
        }
    }

    int biayaA()
    {
        biaya = hargaInap + hargaTreatment;
        return biaya;

    }

};



void print()
{
    do
    {
        system ("cls");
        cout << "\t\t   *********************************************" << endl;
        cout << "\t\t   *               CAT & DOG HOUSE             *" << endl;
        cout << "\t\t   * ----------------------------------------- *" << endl;
        cout << "\t\t   *| Tempat Rawat dan Inap Peliharaan Kamu ! |*" << endl;
        cout << "\t\t   * ----------------------------------------- *" << endl;
        cout << "\t\t   *********************************************\n" << endl;

        cout << " Nama Pemilik : " <<nama<< endl;
        cout << "===============================================================================" << endl;
        cout << "| Jenis Hewan | Waktu Inap (hari)| Paket Inap | Paket Treatment | Total Biaya |" << endl;
        cout << "===============================================================================" << endl;

        cout <<"|"<<setw(13)<<jenis;
        cout <<"|"<<setw(18)<<waktu;
        cout <<"|"<<setw(12)<<paket_i;
        cout <<"|"<<setw(17)<<paket_t;
        cout <<"|"<<setw(13)<<total<<"|" << endl;
        cout << "===============================================================================\n" << endl;

        cout << " Total Biaya   : "<<total<< endl;
        cout << " Uang Bayar    : ";cin >> uangBayar;

        if (uangBayar > total)
        {
            uangKembali = uangBayar-total;
            cout << " Uang Kembali  : "<<uangKembali<< endl;
            flag = 0;
        }else if (uangBayar ==  total)
        {
            uangKembali = 0;
            cout << " Uang Kembali  : "<<uangKembali<< endl;
            flag = 0;
        }else
        {
            cout << endl;
            cout << " Uang Anda kurang !" << endl;
            flag = 1;
        }

        getch();

    }while (flag == 1);
}

int main()
{
    InapKucing k;
    InapAnjing a;
    do
    {
        system ("cls");
        cout << "======================================================" << endl;
        cout << "                    CAT & DOG HOUSE                   " << endl;
        cout << " ---------------------------------------------------- " << endl;
        cout << "| Pet Shop, Tempat Rawat, dan Inap Peliharaan Kamu ! |" << endl;
        cout << " ---------------------------------------------------- " << endl;
        cout << "======================================================\n" << endl;

        cout << " Nama Pemilik     : ";getline(cin >> ws, nama);
        cout << " Jenis Hewan      : ";cin >> jenis;
        cout << " Waktu (hari)     : ";cin >> waktu;

        system("cls");

        cout << "===========================================" << endl;
        cout << "| Pilih Paket Inap Untuk Peliharaan Anda !|" << endl;
        cout << "===========================================\n" << endl;
        cout << " A. Perlengkapan Sudah Disediakan  " << endl;
        cout << " B. Bawa Makanan & Litter Box " << endl;
        cout << " C. Bawa Makanan " << endl;
        cout << "-------------------------------------------\n" << endl;
        cout << " Paket Inap Anda : ";cin >> paket_i;
        cout << endl;

        cout << " Apakah Anda mau menambah treatment (y/n) ? : ";cin >> pilih;

        system("cls");

        if (pilih == 'Y' || pilih == 'y')
        {
            cout << "================================================" << endl;
            cout << "| Pilih Paket Treatment Untuk Peliharaan Anda !|" << endl;
            cout << "================================================\n" << endl;
            cout << " A. Treatment Original  " << endl;
            cout << "    Mandi, Potong Kuku, Bersih Telinga, Parfume\n" << endl;
            cout << " B. Treatment Kutu/Jamur" << endl;
            cout << "    Treatment Original + Shampoo Kutu/Jamur\n" << endl;
            cout << "------------------------------------------------\n" << endl;
            cout << " Paket Treatment Anda : ";cin >> paket_t;
        }else
        {
            paket_t = '-';
        }

        if (jenis == "Kucing" || jenis == "kucing")
        {
            k.hargaInapK(paket_i, waktu);
            k.hargaTreatmentK(paket_t);
            total=k.biayaK();

        } else if (jenis == "Anjing" || jenis == "anjing")
        {
            a.hargaInapA(paket_i, waktu);
            a.hargaTreatmentA(paket_t);
            total=a.biayaA();
        }

        print();

        system ("cls");
        cout << "=> Apa Anda mau melakukan transaksi lain(Y/N) ? ";cin >> choose;

    }while (choose == 'Y' || choose == 'y');

    system ("cls");

    cout << "*****************************************************" << endl;
    cout << " Terimakasih sudah mempercayakan layanan kami ! ^_^" << endl;
    cout << "*****************************************************" << endl;

}
