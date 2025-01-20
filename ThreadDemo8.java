class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is runnning with name : " + Thread.currentThread().getName());
        System.out.println("Thread priority is : " + Thread.currentThread().getPriority());
        
    } 
} 

class ThreadDemo8
{
    public static void main(String Arg[]) throws Exception
    {
        Demo dobj1 = new Demo();
        Thread tobj1 = new Thread(dobj1);
        tobj1.setName("PPA");

        tobj1.setPriority(10);                // Priority is not a good programming practice
        tobj1.start(); 
       
    } 
} 