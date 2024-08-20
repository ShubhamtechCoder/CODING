#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter 1st NO.";
  cin>>a;
  cout<<"Enter 2nd NO.";
  cin>>b;
  cout<<"Enter 3rd NO.";
  cin>>c;
  if (a<b)
      if (a<c)
      cout<<a <<" is the smallest"; 
      else
      cout<<c <<" is the smallest";
  else // a>b
      if (b<c)
       cout<<b <<" is the smallest";   
      else
      cout<<c <<" is the smallest";
}

