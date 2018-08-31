#include<iostream>
using namespace std;
int main(){
//assigning values
	int a, b, c;
//question no. 2
	cout<<"Note:All should be different values"<<endl;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	cout<<"enter the value of c"<<endl;
	cin>>c;
//answer
	if (a>b && a>c)
	cout<<"a greater than b and c"<<endl;
	else if (b>a && b>c)
	cout<<"b is greater than a and c"<<endl;
	else
	cout<<"c is greater than a and c"<<endl;
//done
return 0;
}
