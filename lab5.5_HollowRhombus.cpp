#include<iostream>
using namespace std;
int main(){
//draw hollow rhombus
	int h, w;
	cin>>h;
	cin>>w;
	for (int i=0; i<h; i++){
		if(i==0 || i==h-1){
			for(int j=0; j<h-i; j++){
				cout<<" ";
			}
			for(int j=0; j<w; j++){
				cout<<"*";
			}
		}
		else{
			for(int j=0; j<(h-i); j++){
				cout<<" ";
			}
				cout<<"*";
			for(int j=0; j<(w-2); j++){
				cout<<" ";
			}
				cout<<"*";
		}
			cout<<endl;
}
//done	
return 0;
}

