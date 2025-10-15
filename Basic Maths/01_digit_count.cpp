#include<iostream>
using namespace std;

int main(){
    int n =7729;
    int count=0;

    while (n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"digit count = "<<count<<endl;
    
}
