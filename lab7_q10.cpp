#include<iostream>
using namespace std;
//fibonacci function
int fib(int a){
//0 1 1 2 3 5 8 13
	if ((a==1) || (a==0)){
		return (a);
		}
	else{
		return (fib(a-1)+fib(a-2));
		}
}
//main function
int main(){
	int a, i;
	i=0;
	cout<<"enter number to find it's fibonacci term"<<endl;
	cin>>a;
	cout<<"Fibonacci series is------"<<endl;
	while(i<a){
		cout<<" "<<fib (i);
		i++;
		}
	cout<<endl;
	
return 0;
}
	
