#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int a = 0,b= 1,n; 
  cout<<"enter a number"<<endl;
  cin>>n;
 cout<<a<<"\t"<<b;
for (int i = 1; i <=n-2; i++)
{
   
    b = b + a;
    a = b - a;
     cout<<"\t"<<b;
}


    return 0;
}