class FinalDemo3
{
    public static void main(String Args[])
    {
        Demo obj = new Demo(11,21);

        System.out.println("Value of No1 : "+obj.No1);
        System.out.println("Value of No2 : "+obj.No2);

        obj.No1++;
        obj.No2++;           // Error   obj.No2 = obj.No2 + 1;   
    }
} 

class Demo{
    public int No1;
    final public int No2;

    public Demo(int A, int B)
    {
        No1 = A;
        No2 = B;
    }
} 
