#include<iostream>
using namespace std;
int main()
{
	system ("title  rizal");
	double baju,celana,sepatu,total;
	double *a=&baju;
	double *b=&celana;
	double *c=&sepatu;
	double *d=&total;
	
	cout<<"harga baju = "; cin>>baju;
	cout<<"harga celana = "; cin>>celana;
	cout<<"harga sepatu = "; cin>>sepatu;
	total = (baju+celana+sepatu)/3;
	
	if (400000<=total&&total<=6000000){
		cout<<"\n==================\nharga baju = "<< *a<<endl;
		cout<<"harga celana = "<< *b<<endl;
		cout<<"harga sepatu = "<< *c<<endl;
		cout<<"==================\n Total = "<< *d<<endl;
		cout<<"selamat anda dapat potongan diskon"<<endl;
	}
	
	if (total<=3999999){
		cout<<"\n==================\nharga baju = "<< *a<<endl;
		cout<<"harga celana = "<< *b<<endl;
		cout<<"harga sepatu = "<< *c<<endl;
		cout<<"==================\ Total = "<< *d<<endl;
		cout<<"tidak mendapatkan diskon"<<endl;
	}
}
