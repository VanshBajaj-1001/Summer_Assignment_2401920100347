package Week_4.OOPS;
import java.util.*;
interface Test{
    int square(int x);
}
class Arithmetic implements Test{
    public int square(int x){
        return x*x;
    }
}
public class ToTestInt {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        Arithmetic obj=new Arithmetic();
        System.out.println("Enter Number");
        int z=sc.nextInt();
        System.out.println("Square of"+z+" is "+obj.square(z));
        sc.close();
    }
}
