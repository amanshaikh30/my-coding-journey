#include<iostream>

using namespace std;

class Arithemetic
{
    public:
        int No1;
        int No2;

        Arithemetic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
        }

        int Substraction()
        {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
        }
};


int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    cout<<"Enter first Number \n";
    cin>>Value1;

    cout<<"Enter second Number";
    cin>>Value2;

    Arithemetic obj(Value1,Value2);

    Ret = obj.Addition();
    cout<<"Addition is: "<<Ret<<" \n";

    Ret = obj.Substraction();
    cout<<"Substraction is: "<<Ret<<" \n",Value2;

    return 0;
}

