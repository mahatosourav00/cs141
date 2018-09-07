#include<iostream> 
using namespace std;
int main(){
	int h, w;
	cin>>h;
	cin>>w;
//print square
	//print stars
	for (int i=0; i<h; i++){
		for(int j=0; j<w; j++)
		cout<<"*";
		cout<<endl;
	}
//done
return 0;
}
