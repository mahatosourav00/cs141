#include<iostream>
using namespace std;
int factorial(int a){
	if (a==1){
	return 1;
	}
	else{
	return a*factorial(a-1);
	}
}
int main(){
	int n;
	cout<<"enter the number of which you want to see factorial= "<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is= "<<factorial(n)<<endl;
return 0;
}
	
