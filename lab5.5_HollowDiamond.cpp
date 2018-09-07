#include<iostream> 
using namespace std;
int main(){
	int h, w;
	cout<<"enter 1st height(h) then width(w)....you will see 2h*2w hollow diamond"<<endl;
	cin>>h;
	cin>>w;
//print hollow diamond
	for(int i=0; i<h; i++){
	//print stars
		for (int j=0; j<(w-i); j++){
			cout<<"*";
		}
	//print spaces
		for(int j=0; j<(2*i); j++){
			cout<<" ";
		}
	//print stars
		for(int j=0; j<(w-i); j++){
			cout<<"*";
		}
		cout<<endl;
	}
		
	for(int i=0; i<h; i++){
	//print stars
		for(int j=0; j<(i+1); j++){
			cout<<"*"; 
		}
	//print spaces
		for (int j=0; j<((2)*(w-i-1)); j++){
			cout<<" ";
		}
	//print stars
		for (int j=0; j<i+1; j++){
			cout<<"*";
		
		}
		cout<<endl;
		
	}
//done
return 0;
}

