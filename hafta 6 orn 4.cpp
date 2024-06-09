#include <iostream>
using namespace std;
int main()
{
	int vize , final ;
	double ortalama;
	cout <<"vize:";
	cin>>vize;
	cout<<"final:";
	cin>>final;
	ortalama=(double)(vize*0.4+final*0.6);
	cout<<"dersin ortalaması="<<ortalama;
	return 0 ;
}
