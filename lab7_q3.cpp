#include<iostream>
using namespace std;
//print even no. function
int printE(int i, int n){
	if(i%2!=0){
		i++;
		return printE(i, n);
		}
	else if(i%2==0, i<=n){
		cout<<i<<endl;
		i=i+2;
		int z=printE(i, n);
		return z;
		}
	else	{ 
		return 0;
		}
}
//print odd no. function
int printO(int i, int n){
	if(i%2==0){
		i=i+1;
		return printO(i, n);
		}
	else if(i%2!=0, i<=n){
		cout<<i<<endl;
		i=i+2;
		int z=printO(i, n);
		return z;
		}
	else	{ 
		return 0;
		}
}
//main function
int main(){
	int i, n;
	cout<<"To see all even and odd numbers in a range enter the lower limit"<<endl;
	cin>>i;
	cout<<"enter the upper limit"<<endl;
	cin>>n;
	cout<<"Even numbers are..."<<endl; 
	printE(i, n);
	cout<<"Odd numbers are..."<<endl;
	printO(i, n);
return 0;
}
		
