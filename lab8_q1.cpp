#include<iostream>
using namespace std;
int summation(int foo[], int n, int sum){
	
	for (n=0; n<5; n++){
		sum+=foo[n];
		}
	return sum;
	
}
int main(){
	int n;
	int foo[]={20, 30, 70, 124, 500};
	cout<<"Sum of all elements of an array= "<<summation(foo,n, 0)<<endl;
	return 0;
}
