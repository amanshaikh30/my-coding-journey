class FinalDemo2
{
    public static void main(String Args[])
    {

    }
}

class Base 
{
    final public void Fun()
    {

    }
    public void Gun()
    {

    }
}

class Derived extends Base
{
    public void Fun()          // Error 
    {

    }
    public void Gun()
    {
        
    }
}