/*4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/
//including the stream
#include<iostream>
using namespace std;

int maximum(int ar3[], int size)
{
	int y;
//sorting array in descending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar3[i]<ar3[j])
			{
				y=ar3[i];
				ar3[i]=ar3[j];
				ar3[j]=y;
			}
		}
	}
return ar3[0];
}

int minimum(int ar3[], int size)
{
	int y,i;
//sort array in ascending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar3[i]>ar3[j])
			{
				y=ar3[i];
				ar3[i]=ar3[j];
				ar3[j]=y;
			}
		}
	}
return ar3[0];
}


int main()
{
//Ask the user to put the size of the array
	int size1;
	cout<<"Enter size1"<<endl;
	cin>>size1;

	int ar1[size1];
//Ask user to input values to the array
	cout<<"Put input to array 1 : "<<endl;
//Use loop to input the values
	for(int i=0;i<size1;i++)
	{
		cin>>ar1[i];
	}

	int size2;
	cout<<"Enter size2"<<endl;
	cin>>size2;

	int ar2[size2];
//Ask user to input values to the array
	cout<<"Put input to array 2 :  "<<endl;
//Use loop to input the values
	for(int i=0;i<size2;i++)
	{
		cin>>ar2[i];
	}

	int size=size1+size2;
	int ar3[size];
	cout<<"elements in array after merge of array1 and array2 :  "<<endl;
//using conditions to merge the arrays.
	for(int i=0;i<size1;i++)
    {
    ar3[i]=ar1[i];
    ar3[i+size1]=ar2[i];
    }

    for(int i=0,  k=size1; k<size && i<size2; i++ ,k++)
	{
		ar3[k]=ar2[i];
	}

    for(int i=0;i<size;i++)
    {
    cout<<ar3[i]<<" ";
    }
    cout<<endl;
    cout<<" maximum value of array is:"<<maximum(ar3,size)<<endl;
	cout<<" minimum value of array is:"<<minimum(ar3,size)<<endl;
	return 0;
}
