#include<iostream> 
using namespace std;
int main(){
//print hollow square
	int h, w;
	cin>>h;
	cin>>w;
	//print 5 stars line
	for (int i=0; i<h; i++){
		if (i==0 || i==(h-1)){
		for (int j=0; j<w; j++)
		cout<<"*";
		}
		else{
		cout<<"*";
		for (int j=0; j<(w-2); j++){
		cout<<" ";
		}
		cout<<"*";
		}
		cout<<endl;
	}
return 0;
}

	
