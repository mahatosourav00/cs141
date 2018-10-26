
/*2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/
//
#include<iostream>
using namespace std;
 int large(int *a,int size)
{int b=a[0];
for(int i=0;i<size;i++)
{if(a[i]>b)
{b=a[i];}}
return b;
}

 int small(int *a,int size)
{int b=a[0];
for(int i=0;i<size;i++)
{if(a[i]<b)
{b=a[i];}}
return b;
}
float mean(int *a,int size)
{int sum=0;
for(int i=0;i<size;i++)
{sum=sum+a[i];}
return sum/size;}


 float median(int *a,int size)
{for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
int temp;
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
if(size%2==0)
{return (a[size/2]+a[size/2+1])*.5;}
else
return a[size/2];
}

int highest(int *a,int size)
{
    int i,j;
    int popular = a[0];
    int temp=0, tempCount, count=1;
    for (i=0;i<5;i++)
    {
        tempCount = 0;
        temp=a[i];
        tempCount++;
        for(j=i+1;j<5;j++)
        {
            if(a[j] == temp)
            {
                tempCount++;
                if(tempCount > count)
                {
                    popular = temp;
                    count = tempCount;
                }}}}
    return popular;
}

int main(){
    //taking a array
int a[20];
int size;
cout<<"enter the size"<<endl;
//value of size
cin>>size;
//entering the element
cout<<"enter the elements"<<endl;
for(int i=0;i<size;i++)
{cin>>a[i];}

//getting largest element
cout<<"largest element of array="<<large(a,size)<<endl;
//getting smallest element
cout<<"smallest element of array="<<small(a,size)<<endl;
//getting mean value
cout<<"mean="<<mean(a,size)<<endl;
//getting median
cout<<"median="<<median(a,size)<<endl;
//getting highest frequency
cout<<"element with highest frequency="<<highest(a,size)<<endl;
return 2342;
}
