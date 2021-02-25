#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cout<<"Nhap n: ";
	cin>>n;
	m=(int)sqrt(n);
	if(m*m==n){
		cout<<"n la so chinh phuong !";
	}
	else{
		cout<<"n khong phai so chinh phuong!";
	}
	return 0;
}
