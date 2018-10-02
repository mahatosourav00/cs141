#include<iostream>
using namespace std;
//function to calculate summation of even no. between two no.
int sumEvenNumbers (int firstNum, int secondNum){
	int sum=0;
	if (firstNum%2==0){
		for (int i=firstNum; i<=secondNum; i=i+2){
		sum=sum+i;
		}
	}
	else {
		for (int i=firstNum+1; i<=secondNum; i=i+2){
		sum=sum+i;
		}
	}
	return (sum);
}
//function to calculate sum of all odd no. between two no.
int sumOddNumbers (int firstNum, int secondNum){
	int sum=0;
	if (firstNum%2!=0){
		for (int i=firstNum; i<=secondNum; i=i+2){	
		sum=sum+i;
		}
	}

	else {
		for (int i=firstNum+1; i<=secondNum; i=i+2){
		sum=sum+i;
		}
	}
	return (sum);
}
//function to calculate the sum of squares of all odd numbers between two no.
int sumSquareOddNumbers (int firstNum, int secondNum){
	int sum=0;
	if (firstNum%2!=0){
		for (int i=firstNum; i<=secondNum; i=i+2){
		sum=sum+(i*i);
		}
	}
	else {
		for (int i=firstNum+1; i<=secondNum; i=i+2){
		sum=sum+(i*i);
		}
	}
	return (sum);
}
//function to calculate the sum of squares of all even numbers between two no.
int sumSquareEvenNumbers (int firstNum, int secondNum){
	int sum=0;
	if (firstNum%2==0){
		for (int i=firstNum; i<=secondNum; i=i+2){
		sum=sum+(i*i);
		}
	}
	else {
		for (int i=firstNum+1; i<=secondNum; i=i+2){
		sum=sum+(i*i);
		}
	}
	return (sum);
}
int main(){
	int x, y;
	cout<<"enter the first no."<<endl;
	cin>>x;
	cout<<"enter the second no."<<endl;
	cin>>y;
	int sumE=sumEvenNumbers (x, y);
	int sumO=sumOddNumbers (x, y);
	int sumSquareE=sumSquareEvenNumbers (x, y);
	int sumSquareO=sumSquareOddNumbers (x, y);
	cout<<"sum of even numbers between these="<<sumE<<endl;
	cout<<"sum of odd numbers between these="<<sumO<<endl;
	cout<<"sum of squares of even numbers between these="<<sumSquareE<<endl;
	cout<<"sum of squres of odd numbers between these="<<sumSquareO<<endl;
	return 0;
}	
