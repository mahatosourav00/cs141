#include<iostream>
using namespace std;
//summation of two integers
int summation (int a, int b){
	int r;
	r=a+b;
	return (r);
}

void summation (int a, int b, int& r){
	r=a+b;
}
int main(){
	int x, y, z, r;
	cout<<"enter two integers you want to sum"<<endl;
	cin>>x;
	cin>>y;

//by values
	z= summation (x, y);

//by reference
	summation (x, y, r);
	cout<<"the sum of the integers(by values)="<<z<<endl;
	cout<<"the sum of the integers(by reference)="<<r<<endl;
return 0;
}
