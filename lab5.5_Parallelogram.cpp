#include<iostream>
using namespace std;
int main(){
//draw rhombus
	int h, w;
	cin>>h;
	cin>>w;
	cout<<"enter height and width of the rhombus"<<endl;
	for(int i=0; i<h; i++){
		//draw spaces
		for(int j=0; j<(w-i); j++){
			cout<<" ";
		}
		//draw stars
		for(int j=0; j<w; j++){
			cout<<"*";
		}
		cout<<endl;
	}
//done
return 0;
}
