#include<iostream>
using namespace std;
//reverse function
int rev(int a){
	if (a==0){
	return 0;
	}
	else{ 	
	cout<<a%10;
	return rev(a/10);
	}
}
//main function
int main(){
	int a;
	cout<<"give the number which is to be reversed"<<endl;
	cin>>a;
	rev(a);
return 0;
}


