


class Encapsulation
{
    public static void main (String Arr[])
    {
        System.out.println("Inside main function");

        Arithmetic aobj1 = new Arithmetic();
        Arithmetic aobj2 = new Arithmetic(11,10);

        int Ret = 0;

        Ret = aobj2.Addition();
        System.out.println("Addition is: "+Ret);

        Ret = aobj2.Substraction();
        System.out.println("Substraction is: "+Ret);


        
    }
} 

class Arithmetic
{
    public int No1;
    public int No2;

    public Arithmetic()
    {
        System.out.println("Inside default constructor");
        this.No1 = 0;
        this.No2 = 0;
    }

    public Arithmetic(int A, int B)
    {
        System.out.println("Inside parameterized constructor");
        this.No1 = A; 
        this.No2 = B;
    }

    public int Addition() 
    {
        int Ans = 0;
        Ans = this.No1 + this.No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = this.No1 - this.No2;
        return Ans;
    }
} 