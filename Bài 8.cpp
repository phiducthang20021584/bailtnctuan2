#include<iostream>
#include<cmath>
using namespace std;
void Giaiptbac2(float(a),float(b),float(c))
{
	if(a==0){
		if(b==0){
			cout<<"pt vo nghiem !";
		}
		else{
			cout<<"pt co nghiem duy nhat: x= "<<(-c/b);
		}
	}
	if(a!=0)
	{
		float delta = b*b-4*a*c;
	float x1;
	float x2;
	if(delta >0){
		x1= float ((-b+sqrt(delta))/(2*a));
		x2= float ((-b-sqrt(delta))/(2*a));
		cout<<"pt co 2 nghiem pb la x1="<<x1<<" ,x2= "<<x2<<endl;
	}
	else if(delta =0){
		x1=(-b/(2*a));
		cout<<"pt co nghiem kep la x1=x2= "<<x1;
	}
	else{
		cout<<"pt vo nghiem !";
	}
	}
}
int main()
{
	float a,b,c;
	cout<<"Nhap he so bac 2: ";
	cin>>a;
	cout<<"Nhap he so bac 1: ";
	cin>>b;
	cout<<"Nhap he so tu do : ";
	cin>>c;
	Giaiptbac2(a,b,c);
	return 0;
}
