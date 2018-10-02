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

void minimum (int a, int b, int& min){
	if (a<b)
	min=a;
	else
	min=b;
}

int main(){
	int x, y, min1, min2;
	cout<<"enter two different integers"<<endl;
	cin>>x;
	cin>>y;

//by values
	min1= minimum (x, y);
	cout<<"minimum integer(by values)= "<<min1<<endl;

//by reference
	minimum (x, y, min2);
	cout<<"minimum integer(by reference)= "<<min2<<endl;
return 0;
}
