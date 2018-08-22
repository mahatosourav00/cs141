#include<iostream>
using namespace std;
int main(){
//first enter values
	double beng,eng,phy,chem,bio,total,avg,percent;
//Question no. 8
	cout<<"enter marks of Bengali out of 100"<<endl;
	cin>>beng;
	cout<<"enter marks of English out of 100"<<endl; 
	cin>>eng;
	cout<<"enter marks of Physics out of 100"<<endl;
	cin>>phy;
	cout<<"enter marks of Chemistry out of 100"<<endl;
	cin>>chem;
	cout<<"enter marks of Biology out of 100"<<endl;
	cin>>bio;
	total=beng+eng+phy+chem+bio;
	avg=total/5;
	percent=(total/500)*100;
//Answer
	cout<<"the total is="<<total<<endl;
	cout<<"the average is="<<avg<<endl;
	cout<<"the percentage is="<<percent<<endl;
}
//done
