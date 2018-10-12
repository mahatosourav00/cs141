#include<iostream>
using namespace std;
//palindrome function
int rev(int a, int b){
		if (a==0){
			return b;
			}
		else{
			b=b*10+a%10;
			return rev(a/10, b);
			}
}
//main function
int main(){
	int a, b;
	cout<<"enter a number to see it is palindrome or not"<<endl;
	cin>>a;
	b=rev(a,0);
	if (b==a){
		cout<<"the number is palindrome"<<endl;
		}
	else {
		cout<<"the number is not palidrome"<<endl;
		}
return 0;
}
