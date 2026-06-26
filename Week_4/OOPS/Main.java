package Week_4.OOPS;
class Outer{
    void display(){
        System.out.println("Display function of outer class");
    }
    class Inner{
        void display(){
            System.out.println("Display function of inner class");
        }
    }
}
public class Main {
    public static void main(String args[]){
        Outer obj=new Outer();
        obj.display();
        Outer.Inner obj2=obj.new Inner();
        obj2.display();
    }
}
