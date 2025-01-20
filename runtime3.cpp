#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun()                  // 1000
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun()                          // 2000
        {
            cout<<"Inside  Base Gun\n";
        }
        virtual void Sun()                  // 3000
        {
            cout<<"Inside  Base Sun\n";
        }
        virtual void Run()                  // 4000
        {
            cout<<"Inside  Base Run\n";
        } 
};

class Derived : public Base 
{
    public:
        int x,y;
        virtual void Fun()                  // 5000
        {
            cout<<"Inside Derived Fun\n";
        }
        void Gun()                          // 6000
        {
            cout<<"Inside Derived Gun\n";
        }
        virtual void Mun()                  // 7000 
        {
            cout<<"Inside Derived Mun\n";
        } 
        void Run()                          // 8000                   
        {
            cout<<"Inside  Base Run\n";
        }
}; 

int main()
{
    cout<<"Size of base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of derived class : "<<sizeof(Derived)<<"\n";

    Derived dobj;
    Base *bptr = NULL;
   
    bptr = &dobj;   
    
    bptr->Fun();     // Base Fun()
    bptr->Gun();     // Base Gun()
    bptr->Sun();     // Base Sun()
    bptr->Run();     // Base Run()
    // bptr->Mun();     // Error 


    return 0;
} 