#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;
//P = PERTEMUAN
struct mahasiswa
{
 char nama [30]; //deklarasi tipe data char menggunakan struct
}; 

mahasiswa ueu; //dengan mengalamatkannnya dengan variabel ueu

char terserah[15], terserah2[15], terserah3[15]; //deklarasi tipe data char biasa tanpa struct


struct mahasiswam
{
	char nama[20];
	int nim;
	int umur;
	float ipk;
} mhs;

int garis() //function garis
{
 for(int i=0; i<70; i++) //perulangan untuk membuat garis sampai 70 kali
 {
  cout<<"-";
 }
 cout<<endl;
}

int nama()
{
	cout<<"          TUGAS FSTREAM"<<endl;
	cout<<"Nama    : Raul Irawan Hermanto"<<endl;
	cout<<"Nim     : 20170801001"<<endl;
}
int menu() //function menu
{
 cout<<"\n\n\t    ===DATA MAHASISWA==="<<endl; // menu pemilihan 
 cout<<"------------------------------------------"<<endl;
 cout<<"Silahkan Pilih :"<<endl;
 cout<<"[1] Input Data"<<endl;
 cout<<"[2] Tambah Data"<<endl;
 cout<<"[3] Baca Data"<<endl;
 cout<<"[4] Gabung Data"<<endl;
 cout<<"[5] Keluar"<<endl;
 cout<<"Masukkkan Pilihan yang Anda pilih [1/2/3/4/5]: ";
}

int input_data() //function input data
{
 cout<<"Masukkan nama file (.txt): "; 
 cin.getline(terserah,15); // penginputan data di simpah di variabel terserah
 ofstream simpan (terserah); //memberikan input kepada file yang di input tadi
 system("cls");
 cout<<"\nNama\t    : "; //di dalam file tersebut user menginputkan nama
 cin.getline(ueu.nama,30); //di simpan di variabel nama
 simpan<<ueu.nama<<endl; //mengoutputkan hasil inputan data yang telah diinput
 cout<<"\n\n\n"; system("PAUSE");
}

int tambah_data() // function tambah data
{
 cout<<"Masukkan nama file (.txt): ";
 cin.getline(terserah,15); // fungsi ini sama dengan fungsi input data
 ofstream simpan (terserah, ios::app); 
 system("cls");
 cout<<"\nNama\t    : "; 
 cin.getline(ueu.nama,30); 
 simpan<<ueu.nama<<endl; 
 cout<<"\n\n\n"; system("PAUSE");
}

int baca_data() //function baca data 
{
 cout<<"Masukkan nama file (.txt): ";// user menginputkan nama file txt yang telah di input untuk dibaca
 cin>>terserah; //disimpan di varabel terserah
 ifstream buka (terserah); //ifstream memberikan output dengan membaca isi file
 if(buka.good()) //jadi good di sini merupakan fungsi mengembalikan nilai TRUE jika tidak terjadi kesalahan apapun
 {
  while(!buka.eof()) // di sini di lakukan perulangan eof, maksutnya mengembalikan nilai TRUE jika file yang di buka utk d baca telah mencapai akhir konten dari file
  {
   system("cls");
   while(buka) //perulangan pemanggilan file yang telah di deklarasikan ifstream buka
   { 
    buka.getline(ueu.nama,30); //output nama yang telah di inputkan sebelumnya
    cout<<ueu.nama<<endl;
   }
  }
  cout<<"\n\n\n"; system("PAUSE");
 }
 else cout<<"file tidak ditemukan"<<endl; //jika kondisi di atas tidak sesuai maka, file tersebut tidak ada / tidak ditemukan
 getch();
}

int gabung_data()
{
 cout<<"Masukkan nama file ke-1 (.txt): "; //inputkan file yang pertama dan ingin di gabungkan
 cin.getline(terserah2,15); //disimpan variabel terserah2
 cout<<"Masukkan nama file ke-2 (.txt): "; //inputkan file yang keduadan ingin di gabungkan
 cin.getline(terserah3,15); //disimpan variabel terserah3
 ifstream buka1 (terserah2); //memberikan output dan membaca isi file
 ifstream buka2 (terserah3); //memberikan output dan membaca isi file
 
 ofstream gabung("gabung.txt"); //memberikan input kepada file1
 ofstream gabung2("gabung.txt", ios::app); //memberikan input kepada file2 , ios app maksutny meletakan keluaran atau output pada akhir file
 
 while(buka1)
 {
  buka1.getline(ueu.nama,30); //membuka file 
  gabung<<ueu.nama<<"\n"; //memgabungkannya 
  buka1.close(); //menutup file tsb
  gabung.close(); //menutup file tsb
 } 

 while(buka2)
 {
  buka2.getline(ueu.nama,30);  //membuka file
  gabung2<<ueu.nama<<"\n"; //memgabungkannya 
  buka2.close(); //menutup file tsb
  gabung2.close(); //menutup file tsb
 }
} 

void tampil()
{
	cout<<"---Input---\n\n";
	cout<<"NIM  = "<<mhs.nim<<endl;
	cout<<"Nama = "<<mhs.nama<<endl;
	cout<<"Umur = "<<mhs.umur<<endl;
	cout<<"IPK  = "<<mhs.ipk;
}

void input()
{
	cout<<"---Input---\n\n";
	cout<<"Masukan NIM   : "<<endl; cin>>mhs.nim;
	cout<<"Masukan Nama  : "<<endl; cin>>mhs.nama;
	cout<<"Masukan Umur  : "<<endl; cin>>mhs.umur;
	cout<<"Masykan Ipk   : "<<endl; cin>>mhs.ipk;
}
int LuasPersegi(int p, int l)
	{
		int luas;
		luas = p * l;
		return luas;
	}
void p11()
{
	int nik [30];
	char nama [30];
	char TTL [20];
	char JK [20];
	char Alamat [50];
	char rtrw [50];
	char kel [50];
	char kec [50];
	char agama [50];
	char SP [50];
	char pekerjaan [50];
	char kwn[50];
	char BH[50];
	
	
	cout << ("Input Data KTP\n");
	cin.ignore();
	cout << ("Nama			:");
	cin.getline(nama,30);
	cout << ("Tempat/Tgl Lahir	:");
	cin.getline(TTL,30);
	cout << ("Jenis kelamin		:");
	cin.getline(JK,20);
	cout << ("Alamat			:");
	cin.getline(Alamat,50);
	cout << ("\tRT/RW			:");
	cin.getline(rtrw,50);
	cout << ("\tKel/Desa		:");
	cin.getline(kel,50);
	cout << ("\tKecamatan		:");
	cin.getline(kec,50);
	cout << ("Agama			:");
	cin.getline(agama,50);
	cout << ("Status Perkawinan 	:");
	cin.getline(SP,50);
	cout << ("Pekerjaan		:");
	cin.getline(pekerjaan,50);
	cout << ("Kewarganegaraan		:");
	cin.getline(kwn,50);
	cout << ("Berlaku Hingga		:");
	cin.getline(BH,50);
	
	getch();
	
	
}
void p21()
{
	int jari;
	float luas, panjang, lebar;
	cout <<"Input Panjang Persegi Panjang\t = ";
	cin >> panjang;
	cout <<"Input Lebar Persegi Panjang\t = ";
	cin >> lebar;
	
	luas = panjang * lebar;

	
	cout <<"\nLuas Persegi Panjang \t\t = "<< luas;

	
	getch();
}
void p22()
{
	int a, b, max;
	cout << "Program Mencari Bilangan Terbesar\n";
	cout << "Input Nilai 1 \t\t= ";
	cin >> a;
	cout << "Input Nilai 2 \t\t= ";
	cin >> b;
	
	if(a>b){
		max = a;
	}else{
		max = b;
	}
	cout << "Nilai Terbesar adalah	= " << max;
	
	
	getch();
}
void p23()
{
	int nilai;
	cout << "Input Nilai Mata kuliah = ";
	cin >> nilai;
	if(nilai>=85 && nilai <= 100){
		cout << "LULUS";
		cout << "\nGrade A";	
	}if(nilai>=75 && nilai < 85){
		cout << "LULUS";
		cout << "\nGrade B";
	}if(nilai>=60 && nilai < 75 ){
		cout << "LULUS";
		cout << "\nGrade C";
	}if(nilai>=45 && nilai < 60 ){
		cout << "GAGAL";
		cout << "\nGrade D";
	}if(nilai>=0 && nilai < 45 ){
		cout << "GAGAL";
		cout << "\nGrade E";
	}if(nilai<0 || nilai >100 ){
		cout << "\nInput Nilai Antara 0 - 100";
	}
	
	getch();
}
void p24()
{
	int nilai;
	cout << "Input Nilai Mata kuliah	= ";
	cin >> nilai;
	
	if(nilai>=60){
		cout << "LULUS\n";
	}
	else {
		cout << "TIDAK LULUS\n\n";
	}
	
	cout << "Program Selesai";
	
	getch();
}
void p31()
{
	int tinggi;
	
	cout << "Masukan Tinggi Badan Anda = " ;
	cin >> tinggi;
	
	
	if(tinggi >= 165){
		cout << "\nSelamat Anda Lulus, Karena Anda Tinggi";
	}else {
		cout << "\nMaaf Anda Tidak Lulus, Makannya Jadi Orang Jangan Pendek - Pendek!!!";
	}
		
	
	getch();
}
void p51()
{
	for(int i=1; i<10;i++){
		cout << i << " ";
	}
	getch();
}
void p52()
{
	int i = 1;
	while (i < 20){
		if(i%2==0)
		cout << i << " ";
		i++;
	}
}
void p61()
{
	int panjang, lebar;
	cout << "Masukan Panjang	: ";
	cin >> panjang;
	cout << "Masukan Lebar		: ";
	cin >> lebar;
	cout <<" Luas Persegi		: "<<panjang*lebar;
}

void p62()
{
		int a,b;
		cout << "Masukan Panjang	: ";
		cin >> a;
		cout << "Masukan Lebar		: ";
		cin >> b;
		cout << "Luas Persegi		: "<< LuasPersegi(a,b);
		getch();
}
void p10_1()
{
	cout<<"Selamat Datang";
	input();
	
	tampil();
}
void p10_2()
{
	char pil; // deklarasi variabel menu

 start:
 system("cls"); 
 nama();
 menu(); //pemanggilan function menu
 cin>>pil; //menyimpan variabel pil
 cin.ignore(); //untuk penginputan nama file txt
 system("cls");

  switch (pil)
    {
  case '1': input_data(); goto start; //pemanggilan function input_data
  case '2': tambah_data(); goto start; //pemanggilan function tambah_data
  case '3': baca_data(); goto start; //pemanggilan function baca_data
  case '4': gabung_data(); goto start; //pemanggilan function gabung_data
  case '5': cout<<"\n\n\tTerima Kasih Telah Menggunakan Program ini!"<<endl; 
  break;
  default : cout<<"\n\n\tPilihan Salah, Silahkan Coba Lagi\n\n"<<endl; 
  system("PAUSE"); 
  goto start;
    }
    getch();
}
void exit()
{
	system("cls");
	
	cout<<" Terima Kasih Telah Menggunakan Program Gabungan Saya "<<endl;
}
void names(){
	cout<<"\n\t\t\t ==> Program Gabungan Bahasa Pemrograman <== "<<endl;
    cout<<"\n\t\t\t Nama     : Raul Irawan Hermanto ";
    cout<<"\n\t\t\t Nim      : 20170801001 ";
    cout<<"\n\t\t\t Fakultas : Ilmu Komputer     ";
    cout<<"\n\t\t\t Jurusan  : Teknik Informatika ";
    cout << "\n\n";system("\npause");
	system("cls");
}

int main()
{
	names();
	mulai:
	int p;
	char pil;
	cout<<" Program Gabungan Bahasa Pemrograman Selama 1 Semester"<<endl<<endl;
	cout<<" 1.  Pertemuan  1 Lat 1 (Input KTP)"<<endl;
	cout<<" 2.  Pertemuan  2 Lat 1 (Luas Persegi)"<<endl;
	cout<<" 3.  Pertemuan  2 Lat 2 (Bilangan Terbesar)"<<endl;
	cout<<" 4.  Pertemuan  2 Lat 3 (Nilai Grade)"<<endl;
	cout<<" 5.  Pertemuan  2 Lat 4 (Nilai Lulus)"<<endl;
	cout<<" 6.  Pertemuan  3 Lat 1 (Tinggi Badan)"<<endl;
	cout<<" 7.  Pertemuan  5 Lat 1 (Mencetak Angka 1-9)"<<endl;
	cout<<" 8.  Pertemuan  5 Lat 2 (Mencetak Deret Genap 1-20)"<<endl;
	cout<<" 9.  Pertemuan  6 Lat 1 (Luas Persegi Panjang Pakai Function)"<<endl;
	cout<<" 10. Pertemuan  6 Lat 2 (Luas Persegi Panjang Pakai Parameter)"<<endl;
	cout<<" 11. Pertemuan 10 Lat 1 (Input Data Mahasiswa Pakai Struct)"<<endl;
	cout<<" 12. Pertemuan 10 Lat 2 (File Stream)"<<endl;
	cout<<" 13. Exit Program"<<endl;
	cout<<" Masukan Pilihan Anda : "; cin>>p;
	system("cls");
	if(p==1){
		p11();
	}else if(p==2){
		p21();
	}else if(p==3){
		p22();
	}else if(p==4){
		p23();
	}else if(p==5){
		p24();
	}else if(p==6){
		p31();
	}else if(p==7){
		p51();
	}else if(p==8){
		p52();
	}else if(p==9){
		p61();
	}else if(p==10){
		p62();
	}else if(p==11){
		p10_1();
	}else if(p==12){
		p10_2();
	}else if(p==13){
		goto keluar;
	}
	system("cls");
	cout<<" \nApakah Anda Ingin Mengulang Program Gabungan ini [Y/T] : "; cin>>pil;
	system("cls");
	
	if(pil=='y'||pil=='Y'){
		goto mulai;
	}
	if(pil=='t'||pil=='T'){
		exit();
}
	keluar:
	system("cls");
	
	cout<<" Terima Kasih Telah Menggunakan Program Gabungan Saya "<<endl;
}
	
			


