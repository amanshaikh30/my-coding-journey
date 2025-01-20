#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &X = no;

    cout<<no<<"\n";
    cout<<X<<"\n";

    cout<<&no<<"\n";
    cout<<&X<<"\n";


    return 0;
} 