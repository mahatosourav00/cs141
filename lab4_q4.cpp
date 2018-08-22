#include<iostream>
using namespace std;
int main(){
//enter values
	int days1,days,months,weeks,years;
//Question no. 4
	cout<<"please enter day/days"<<endl;
	cin>>days1;
	years=days1/365;
	months=(days1-years*365)/30;
	weeks=(days1-(365*years+months*30))/7;
	days=days1-(365*years+months*30+weeks*7);
	
//answer
	cout<<"years is/are"<<years<<endl;
	cout<<"months is/are"<<months<<endl;
	cout<<"weeks is/are"<<weeks<<endl;
	cout<<"days is/are"<<days<<endl;
}
//done
