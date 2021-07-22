#include <iostream>
#include <conio.h>
#include <cmath>
#include <ctype.h>
using namespace std;

void y1 ()
{
		int yanA, yanAaaa;
		char yanAa, yanAaa;
			cout << " >> Jakarta - Yogyakarta " << endl;
			cout << " ------------------------" << endl;
			cout << " Pilih Kelas" << endl << endl;
			cout << " A. Economy " << endl;
			cout << " B. Business " << endl;
			cout << " C. First Class " << endl << endl;
			cout << " Pilih Kelas yang Anda inginkan : "; cin >> yanAa; cout << endl;
			cout << " ============================================= " << endl << endl;
			switch (yanAa)
			{
				case 'A' :
					cout << " >> Economy " << endl;
					cout << " -----------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Air Asia " << endl;
					cout << " b. Lion Air " << endl;
					cout << " c. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Air Asia " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp388.100 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 388100;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp455.000 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 455000;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'c' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp1.230.000 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 1230000;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						
					}
					break;
				
				case 'B' :
					cout << " >> Business " << endl;
					cout << " ------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Lion Air " << endl;
					cout << " b. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp1.893.400 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 1893400;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp3.431.700 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 3431700;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
					}
					break;
					
				case 'C' :
					cout << " >> First Class " << endl;
					cout << " ---------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					if (yanAaa == 'a')
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp5.154.200 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 5154200;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
					break;
					
				default :
					cout << " Maaf, Class Tidak Tersedia ";
	}
}
	
void y2 ()
{
		int yanA, yanAaaa;
		char yanAa, yanAaa;
			cout << " >> Makassar - Surabaya " << endl;
			cout << " -----------------------" << endl;
			cout << " Pilih Kelas" << endl << endl;
			cout << " A. Economy " << endl;
			cout << " B. Business " << endl;
			cout << " C. First Class " << endl << endl;
			cout << " Pilih Kelas yang Anda inginkan : "; cin >> yanAa; cout << endl;
			cout << " ============================================= " << endl << endl;
			switch (yanAa)
			{
				case 'A' :
					cout << " >> Economy " << endl;
					cout << " -----------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Air Asia " << endl;
					cout << " b. Lion Air " << endl;
					cout << " c. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Air Asia " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp853.600 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 850000;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp915.300 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 915300;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'c' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp1.932.400 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 1932400;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
					}
					break;
				
				case 'B' :
					cout << " >> Business " << endl;
					cout << " ------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Lion Air " << endl;
					cout << " b. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp3.980.600 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 3960600;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp5.342.900 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 5342900;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
					}
					break;
				case 'C' :
					cout << " >> First Class " << endl;
					cout << " ---------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					if (yanAaa == 'a')
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp7.569.800 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 7569800;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
					break;
					
				default :
					cout << " Maaf, Class Tidak Tersedia ";
			}
	}
	

void y3 ()
{
		int yanA, yanAaaa;
		char yanAa, yanAaa;
			cout << " >> Jakarta - Bali " << endl;
			cout << " ------------------" << endl;
			cout << " Pilih Kelas" << endl << endl;
			cout << " A. Economy " << endl;
			cout << " B. Business " << endl;
			cout << " C. First Class " << endl << endl;
			cout << " Masukkan Kelas yang Anda inginkan : "; cin >> yanAa; cout << endl;
			cout << " ============================================= " << endl << endl;
			switch (yanAa)
			{
				case 'A' :
					cout << " >> Economy " << endl;
					cout << " -----------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Air Asia " << endl;
					cout << " b. Lion Air " << endl;
					cout << " c. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Air Asia " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp971.100 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 971100;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp642.000 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 642000;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'c' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp1.951.100 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 1951100;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
					}
					break;
				
				case 'B' :
					cout << " >> Business " << endl;
					cout << " ------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Lion Air " << endl;
					cout << " b. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					switch (yanAaa)
					{
						case 'a' :
							cout << " >> Lion Air " << endl;
							cout << " ------------" << endl;
							cout << " Harga Per-Tiket = Rp3.106.200 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 3106200;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
						case 'b' :
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp6.891.230 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 6891230;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
							break;
					}
					break;
					
				case 'C' :
					cout << " >> First Class " << endl;
					cout << " ---------------" << endl;
					cout << " Pilihan Maskapai " << endl << endl;
					cout << " a. Garuda Indonesia " << endl << endl;
					cout << " Masukkan Pilihan : "; cin >> yanAaa; cout << endl;
					cout << " ============================================= " << endl << endl;
					if (yanAaa == 'a')
							cout << " >> Garuda Indonesia " << endl;
							cout << " --------------------" << endl;
							cout << " Harga Per-Tiket = Rp10.569.500 " << endl;
							cout << " Masukkan Jumlah Tiket : "; cin >> yanAaaa; cout << endl;
							yanAaaa = yanAaaa * 10569500;
							cout << " Harga yang Harus Dibayar : Rp" << yanAaaa;
					break;
					
				default :
					cout << " Maaf, Class Tidak Tersedia ";
	}
}

int main()
{
	int yanA, yanAaaa;
	char yanAa, yanAaa;
	string tujuan[3] = {"Jakarta		-	Yogyakarta" , "Makassar		-	Surabaya" , "Jakarta		-	Bali"};
	menu :
	cout << "============================================== " << endl;
	cout << "                 BANANA TRAVEL                 " << endl;
	cout << "            Penjualan Tiket Pesawat            " << endl;
	cout << "============================================== " << endl << endl;
	cout << " Pilih Tujuan Penerbangan Anda " << endl;
	cout << " --------------------------------------------- " << endl;
	for (yanA=0; yanA < 3; yanA++)
	{
		cout << " " << yanA+1 << ". " << tujuan[yanA] << endl;
	}
	cout << " --------------------------------------------- " << endl;
	cout << " Masukkan Pilihan : "; cin >> yanA; cout << endl;
	cout << "============================================== " << endl << endl;
	switch (yanA)
	{
		case 1 :
			y1(); break;
		case 2 :
			y2(); break;
		case 3 :
			y3(); break;
		default : goto menu;
	}
	cout << endl << endl;
	cout << " =========================== " << endl;
	cout << " Silahkan Lakukan Pembayaran " << endl;
	cout << " =========================== " << endl;
	cout << endl;
	cout << " >> Tekan Enter << " << endl << endl;
	system ("pause");
	system ("cls");
	cout << endl;
	cout << "==========================================================" << endl;
	cout << endl;
	cout << "               Transaksi Anda Telah Selesai               " << endl;
	cout << "       Terima Kasih Telah Menggunakan Layanan Kami        " << endl;
	cout << "             Semoga Perjalananmu Menyenangkan             " << endl;
	cout << endl;
	cout << "==========================================================" << endl;
cin.get();
}
