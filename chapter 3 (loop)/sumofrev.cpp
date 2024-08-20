#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int r=0;
    int a=n;
    while (n!=0){
        int ld = n%10;
        n/=10;
        r= r*10;
        r= r+ld;
    }
    int sum= r+a;
    cout<<sum;
}