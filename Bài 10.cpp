#include<iostream>
using namespace std;
int main()
{
	int a;
	double b,c;
	cout<<"Nhap nhiet do F: ";
	cin>>a;
	b=(a-32)*5/9;
	c=b+273.15;
	cout<<" "<<a<<" "<<b<<" "<<c;
	return 0;
}
