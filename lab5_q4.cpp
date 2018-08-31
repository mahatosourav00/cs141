#include<iostream>
using namespace std;
int main(){
// asiggning the value
	int a;
//qustion no.4
	cout<<"enter the value of a"<<endl;
	cin>>a;
//answer
	if (a%5==0)
	cout<<"a is divisible by 5"<<endl;
	else if (a%11==0)
	cout<<"a is divisible by only 11"<<endl;
	else
	cout<<"a is not divisible by both 5 and 11"<<endl;
//done
return 0;
}
