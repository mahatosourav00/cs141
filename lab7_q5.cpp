#include<iostream>
using namespace std;
//function for sum of all even numbers from 1 to n
int sumE(int a, int b){
	if (a<b){
	int x=a+sumE(a+2,b);
	return x;
	}
}
//function for sum of all odd numbers from 1 to n
int sumO(int a, int b){
	if(a<b-1){
	int y=a+sumO(a+2,b);
	return y;
	}
}	
//main function
int main(){
	int n;
	cout<<"To see sum of all even and odd numbers from 1 to n...type upeer limit(n)"<<endl;
	cin>>n;
	cout<<"sum of all even numbers= "<<sumE(2,n)<<endl;
	cout<<"sum of all odd numbers= "<<sumO(1,n)<<endl;
return 0;
}	
	
