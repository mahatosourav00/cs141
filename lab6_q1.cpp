#include<iostream>
using namespace std;
//input function
void input (float &unitCst, float &units, float &taxRt){
	cout<<"enter the unit cost"<<endl;
	cin>>unitCst;
	cout<<"enter the number of units"<<endl;
	cin>>units;
	cout<<"enter the text rate"<<endl;
	cin>>taxRt;
}
//data calculation function
void dataCl (float unitCst, float units, float taxRt, float &salesTx, float &totDue){
	salesTx=unitCst*units*taxRt/100;
	totDue=salesTx+unitCst*units;
}
//function for list of all
void dataPrfloat (float unitCst, float units, float taxRt, float salesTx, float totDue){
	cout<<" Each item has cost="<< unitCst<<" rupees"<<endl;
	cout<<" Total items="<<units<<endl;
	cout<<" Each item has tax of="<<taxRt<<" percent"<<endl;
	cout<<" It means total sales tax="<< salesTx<<endl;
	cout<<" Total due is="<<totDue<<" rupees"<<endl;
}
int main(){
	float unitCost, unitsPurch, taxRate, salesTax, totalDue;
	input (unitCost,unitsPurch,taxRate);
	dataCl(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	dataPrfloat(unitCost,unitsPurch,taxRate,salesTax,totalDue);
}
