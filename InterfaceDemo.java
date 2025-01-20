interface RBI
{
    int TaxRate = 30;
    public float CalculateInterest();
}

class SBI implements RBI{
    public float CalculateInterest()
    {
        return 7.5f;
    }
    
}

class BOM  implements RBI
{
    public float CalculateInterest()
    {
        return 8.2f;
    }
}

class InterfaceDemo
{
    public static void main(String Arg[])
    {
        System.out.println("Tax rate is : "+RBI.TaxRate);
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        System.out.println("Interest rate of SBI is : "+sobj.CalculateInterest());
        System.out.println("Interesr rate is BOM : "+bobj.CalculateInterest());
    } 
} 