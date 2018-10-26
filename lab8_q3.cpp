/*3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)*/

#include<iostream>
using namespace std;
//make function with proper parameters
// write a function for the kth largest element.
int klarge(int ar[], int size,int k)
{
	int x;
//sort array in descending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]<ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
return ar[k-1];
}
// writing function for the kth smallest.
int ksmall(int ar[], int size,int k)
{
	int x;
//sort array in ascending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]>ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
return ar[k-1];
}
//writing the Main function
int main()
{
//Ask the user to put the size of the array
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int ar[size];
//Ask user to put the  values to an array
	cout<<"fill the input in array"<<endl;
//Use loop to input the values
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}
//Ask user for the k value
cout<<"Enter the value of k"<<endl;
int k;
cin>>k;
//Call the function
	cout<<k<<" largest value of array is:"<<klarge(ar,size,k)<<endl;
	cout<<k<<" smallest value of array is:"<<ksmall(ar,size,k)<<endl;
	return 0;
}
