#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float rp1,usd,rp2=15198.25;
	cout<<"KONVERSI DOLAR KE RUPIAH"<<endl<<endl;
	cout<<"1 Dolar = 15.198,25 (per tanggal 24 Oktober 2018)"<<endl;
	cout<<"Masukkan Dolar = ";cin>>usd;
	rp1=rp2*usd;
	cout<<"Maka "<<usd<<" Dolar adalah "<<rp1<<" Rupiah";
}
