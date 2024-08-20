#include <iostream>
using namespace std;

void usa (){
    cout<<"usa is my country"<<endl;
    return;
}
void india (){
    cout<<"India is good"<<endl;
    usa ();
}
int main (){
    cout<<"Hii bsdk"<<endl; 
    india ();
}