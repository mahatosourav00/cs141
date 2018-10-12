#include<iostream>
using namespace std;
//sum function
int sum(int a, int b){
	if (a==0){
		return b;
		}
	else{
		b=b+a%10;
		return sum(a/10, b);
		}
}
//main function
int main(){
	int a, b;
	cout<<"enter number to see sum of its all digits"<<endl;
	cin>>a;
	b=sum(a, 0);
	cout<<"sum of all the digits of the number is= "<<b<<endl;
return 0;
}
