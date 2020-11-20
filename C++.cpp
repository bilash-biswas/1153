#include<iostream>
using namespace std;
int main()
{
    int N,i,f=1;
    cin>>N;
    if(N>0 && N<13)
    {
     for(i=N;i>=1;i--)
    {
        f=f*i;
    }
    }
    cout<<f<<endl;


    return 0;
}
