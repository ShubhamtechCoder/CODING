#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter value : ";
    cin>>n;
    for (int i=1; i<=n; i++){
         for (int j=1; j<=n-i; j++){ // spaces
            cout<<"  ";
         }
        for (int j=1; j<=n; j++){ // stars
            cout<<"* ";
         }
        cout<<endl;
    }
}
    