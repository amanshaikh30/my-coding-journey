class LoopDemo
{
    public static void main(String Args[])
    {
        int i = 0;

        System.out.println("Output by using for loop");

        for(i=1; i<=5; i++)                      // for loop
        {
            System.out.println(i); 
        }

        System.out.println("Output by using while loop");

        i = 1;
        while (i<=5)                             // while loop
        {
            System.out.println(i);
            i++;
        } 

        System.out.println("Output by using while loop");

        i = 1;
        do                                       // do-while loop
        {
            System.out.println(i);
            i++;
        }while(i<=5); 
    }
} 