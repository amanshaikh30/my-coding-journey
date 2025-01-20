class MultiLevel
{
    public static void main(String Args[])
    {
        System.out.println("Inside main method");
        DerivedX dobj = new DerivedX();

        dobj.Fun();
        dobj.Gun();
        dobj.Sun();
    }
} 

class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }
} 

class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class DerivedX extends Derived 
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
    }

    public void Sun()
    {
        System.out.println("Inside DerivedX Sun");
    } 
}


