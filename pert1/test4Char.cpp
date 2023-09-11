//character atau char

#include <iostream>
#include <cstring>
using namespace std;
main()
{
	char C, D;
	cout<<"Test pertama \n";
	cout<<"Masukkan dua karakter \n";
	cin>>C;
	cin>>D;
	cout<<C;
	cout<<D;
	
	/*pembatas*/cout <<"\n\n";
	
	cout<<"test kedua\n";
	char nama[20]; //20 merupakan pangjang maksimum karakter
	strcpy(nama, "lutfi");
	cout<<"nama  = "<<nama;
	

}
