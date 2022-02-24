//This problem statement is based on reversing the elements of array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array elements";
    for(int i=0;i<=n;i++){
    cin>>a[i];
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
