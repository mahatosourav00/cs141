#include<iostream>
using namespace std;
int main(){
//ASSIGN VALUE
	int i, n, b;
	i=1;
	b=0;

//input
	cout<<"type any natural no."<<endl;
	cin>>n;
//answer 
	while (i<=n)
	{
	b=b+i;
	i++;
	}
	cout<<"sum is="<<b<<endl;
//done
return 0;
}
