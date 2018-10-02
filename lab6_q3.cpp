#include<iostream>
using namespace std;
//maximum of two integers
int maximum (int a, int b){
	int max;	
	if (a>b)
	max=a;
	else
	max=b;
	return (max);
}	

void maximum (int a, int b, int& max){
	if (a>b)
	max=a;
	else
	max=b;
}

int main(){
	int x, y, max1, max2;
	cout<<"enter two different integers"<<endl;
	cin>>x;
	cin>>y;

//by values
	max1=maximum (x, y);
	cout<<"maximum is(by values) "<<max1<<endl;

//by reference
	maximum (x, y, max2);
	cout<<"maximum is(by reference) "<<max2<<endl;
return 0;
}
	
