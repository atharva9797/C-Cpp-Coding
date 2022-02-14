#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the amount of rows and cols";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++)
        if(i == 1 || i == row || j== col || j ==1 )
        {
            cout<<"*";

        }
        else{
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
