#include<iostream> //header agar fungsi cout dan cin dapat berjalan
#include<conio.h>  //header agar fungsi getch dapat berjalan
#define phi 3.14159265  //mendefinisikan variabel phi sebagai 3.14159265
#define teks "Program mencari luas lingkaran\n\n" //mendefisikan teks

using namespace std;
main()
{
int r;
cout<<teks<<endl; //menampilkan nilai dari teks
cout<<"Input nilai jari-jari : ";cin>>r;
cout<<"Luas lingkaran = "<<phi*r*r;
getch();
}

