
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long unsigned int n , d =0   ;
    float p = 0;
    cout<<"enter a  binary number"<<endl;
    cin>>n;

     while (n!=0)
     {
        d += (n%10)*(int) (pow(2.0,p));
        p++;
        n /= 10;
     }
     cout<<d;

    
    return 0;
}