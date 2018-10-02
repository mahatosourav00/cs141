#include<iostream>
using namespace std;
//find the minimum integer
int minimum (int a, int b){
	int min;
	if (a<b)
	min=a;
	else
	min=b;
	return (min);
}
int maximum (int a, int b){
	int max;
	if(a>b)
	max=a;
	else
	max=b;
	return (max);
}
int summation (int a, int b){
	int r;
	r=a+b;
	return (r);
}

void minimum (int a, int b, int& min){
	if (a<b)
	min=a;
	else
	min=b;
}

void maximum (int a, int b, int& max){
	if (a>b)
	max=a;
	else
	max=b;
}
void summation (int a, int b, int& r){
	r=a+b;
}

int main(){
	int x, y, z1, z2, max1, max2, min1, min2;
	cout<<"enter two different integers"<<endl;
	cin>>x;
	cin>>y;

//by values
	min1= minimum (x, y);
	cout<<"minimum integer(by values)= "<<min1<<endl;
	max1= maximum (x, y);
	cout<<"maximum integer(by values)= "<<max1<<endl;
	z1= summation (x, y);
	cout<<"summation of two integers(by values)= "<<z1<<endl;
//by reference
	minimum (x, y, min2);
	cout<<"minimum integer(by reference)= "<<min2<<endl;
	maximum (x, y, max2);
	cout<<"maximum integer(by reference)= "<<max2<<endl;
	summation (x, y, z2);
	cout<<"summation of two integers(by reference)= "<<z2<<endl;
return 0;
}
