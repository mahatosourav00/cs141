#include<iostream>
#include<cmath>
using namespace std;
int main(){
//enter values
	double principle,rate,time,ntime,interest1,interest;
	float power,rt;
//Question no. 10
	cout<<"we have to find compound interest so enter the principle"<<endl;
	cin>>principle;
	cout<<"rate"<<endl;
	cin>>rate;
	cout<<"time"<<endl;
	cin>>time;
	cout<<"number of time interest is compounded per year"<<endl;
	cin>>ntime;
	interest1=(1+rate/ntime);
	rt=ntime*time;
	power=pow(interest1,rt);
	interest=principle*power;
//Answer
	cout<<"the compound interset is="<<interest<<endl;
}
//done


