package Week_4.OOPS;
import java.util.*;
class Box{
    double length;
    double width;
    Box(double length,double width){//paramerized constructor
       this.length=length;
       this.width=width;
    }
     double area(){
        return length*width;
     }
}
class Box3D extends Box{
    double height;
    Box3D (double length,double width,double height){
         super(length, width);
         this.height=height;
    }
    double volume(){
        return length*height*width;
    }
}
public class Area {
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter length and width");
       double l=sc.nextDouble();
       double w=sc.nextDouble();
       Box b=new Box(l,w);
      System.out.println(b.area());
      System.out.println("Enter height");
      double h=sc.nextDouble();
      Box3D B= new Box3D(l,w,h);
      System.out.println(B.volume());
      sc.close();
    }
    
}
