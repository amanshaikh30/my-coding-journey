class Hierarchical
{
    public static void main(String Args[])
    {
        System.out.println("Inside main method");
        Derived dobj1 = new Derived();
        DerivedX dobj2 = new DerivedX();

        dobj1.Fun();
        dobj1.Gun();
        
        dobj2.Fun();
        dobj2.Sun();
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

class DerivedX extends Base 
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


