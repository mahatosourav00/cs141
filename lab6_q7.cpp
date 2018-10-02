#include<iostream>
using namespace std;
//toUpper function
char toUpper (char a){
	int Upper=a-32;
	return (Upper);
}
//toLower function
char toLower (char a){
	int Lower=a+32;
	return (Lower);
}

//main function
int main(){
	char x;
	cout<<"Type an alphabate"<<endl;
	cin>>x;
	if (x>='a' && x<='z'){
	cout<<"The alphabate you typed is a Lowercase letter....The Uppercase letter is="<<toUpper (x)<<endl;
	}
	else{
	cout<<"The alphabate you typed is a Uppercase letter....The Lowercase letter is="<<toLower (x)<<endl;
	}
return 0;
}
