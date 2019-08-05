/*Program to perform Array Rotation*/


#include<bits/stdc++.h>
using namespace std;

// Function to rotate leftmost element one by one
void leftRotateByOne(int arr[],int n)
{
    int temp=arr[0];int i;
    for( i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[i]=temp;
}

//driver function to call leftRotateByOne

void leftRotate(int arr[],int d, int n)
{
    for(int i=0;i<d;i++)
        leftRotateByOne(arr,n);
    
}

// Function to rotate rightmost element one by one

void rightRotateByOne(int arr[],int n)
{
    int temp=arr[n-1];
    int i;
    for(i=n-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[i]=temp;
}

//driver function to call rightRotateByOne

void rightRotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
        //rotate(arr,n);
        rightRotateByOne(arr,n);
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    
    int n= sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,2,n);
    printArray(arr,n);
    rightRotate(arr,2,n);
    printArray(arr,n);
    return 0;
}
