#include<iostream>
using namespace std;
int main()
{
	int i,f,tot;
	int batas=30;
	int *rizal=&tot;
	
	cout<<"Masukan angka Percobaan = ";
	cin>>f;
	
	for (i=1; i<=batas; i++){
		tot=i*f;
		cout<<i<<"x"<<f<<"="<<*rizal<<endl;
	}
	return 0;
}
