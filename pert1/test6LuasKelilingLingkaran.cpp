/*Program mencari luas dan keliling lingkaran*/
#include<iostream>
using namespace std;
main()
{
	/*
	r = jari-jari	L = Luas	k = Keliling
	*/
	cout<<"\nr = jari-jari\nL = Luas\nk = Keliling\n\n";
	int r;
	float L, k;
	cout<<"Masukkan jari-jari(r) = ";
	cin>>r;
	L = 3.14*r*r;
	k = 2*3.14*r;
	cout<<"Luas     = "<<L<<endl;
	cout<<"Keliling = "<<k;
}

