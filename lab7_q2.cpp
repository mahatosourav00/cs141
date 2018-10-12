#include<iostream>
using namespace std;
//print function
int printN(int i, int n){
	if (i<=n){
	cout<<i<<endl;
	i++;
	printN(i, n);
	}
	else{
	return 0;}
}
//main function
int main(){
	int n;
	cout<<"Enter any natural number n to see all natural numbers between 1 to n"<<endl;
	cin>>n;
	printN(1, n);
return 0;
}
	
