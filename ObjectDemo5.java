class Student 
{
    public String Name;
    public int Age;
    public int Marks;

    public Student(String A, int B, int C)
    {
        this.Name = A;
        this.Age = B;
        this.Marks = C;
    }
    public String toString()
    {
        System.out.println("Inside our toString method");
        return Name+" " +Age+ " "+Marks;
    }
} 

class ObjectDemo5 
{
    public static void main(String Arg[]) 
    {
        Student sobj = new Student("Aman",21,99);
        System.out.println(sobj); 
    }
} 