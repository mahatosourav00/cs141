#include<iostream>
using namespace std;
//power function
int power(int a, int b){
	int z;
	//a^b=a*a^(b-1)
	if (b==0){
	return 1;
	}
	else{
	z= a*power(a,b-1);
	return z;
	}
}
int main(){
	int a, b;
	cout<<"To calculate (a^b) enter 'a'"<<endl;
	cin>>a;
	cout<<"now enter 'b'"<<endl;
	cin>>b;
	int pow=power(a,b);
	cout<<"Value of a^b= "<<pow<<endl;
return 0;
}

