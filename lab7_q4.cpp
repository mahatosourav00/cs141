#include<iostream>
using namespace std;
int summation(int i, int n){
	if(n==1){
	return i;
	}
	else 
	{int z=i+summation (i+1,n-1);
	return z;
	}
}
int main(){
	int n;
	cout<<"To see sum of all natural numbers between 1 to n type n"<<endl;
	cin>>n;
	int z=summation (1, n);
	cout<<"Sum of all natural numbers is= "<<z<<endl;
return 0;
}
