#include<iostream>
using namespace std;
int main(){
//assign the value
	int i, n;
	i=1;
//taking input
	cout<<"enter number n so that u can see all natural no. upto 1"<<endl;
	cin>>n;
//answer
	while(n>=i){
	n=n-1;
	cout<<n+1<<endl;
	}
//done
return 0;
}
