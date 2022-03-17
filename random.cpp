#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    long a,b,c;
    a=time(0);
    cout<<'\n';
    for (long j=0;j<1000000;j++)
    {
    srand(rand());
    srand(time(0));
    cout<<"Your otp is :";
    for (int i=0;i<10;i++)
    {
        cout<<1+(rand()%9);
    } 
   cout<<'\n';
    }
    b=time(0);
    c=b-a;
   cout<<c;
    return 0;

}