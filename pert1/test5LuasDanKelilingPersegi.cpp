/*Program mencari luas dan keliling persegi*/
#include<iostream>
using namespace std;
main(){
	/*
	P= panjang	l = lebar
	L = Luas	k = Keliling
	*/
	cout<<"P= panjang	l = lebar\nL = Luas	k = Keliling\n\n";
	int p,l,L,k;
	cout<<"Masukkan Panjang = ";
	cin>>p;
	cout<<"Masukkan lebar = ";
	cin>>l;
	L = p*l;
	k = 2*(p+l);
	cout<<"Luas     = "<<L<<endl;
	cout<<"Keliling = "<<k;

}

