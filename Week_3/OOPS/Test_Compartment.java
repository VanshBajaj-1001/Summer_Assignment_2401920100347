package Week_3.OOPS;
abstract class Compartment{
    public abstract String notice();
}
class FirstClass extends Compartment{
          @Override
    public String notice(){
        return "First Class Compartment Ticket";
    }
}
class Ladies extends Compartment{
    @Override
    public String notice(){
        return "Ladies Compartment Ticket";
    }
}
class General extends Compartment{
        @Override
    public String notice(){
        return "General Class Compartment Ticket";
    }
}
class Luggage extends Compartment{
      @Override
    public String notice(){
        return "Luggage Class Compartment Ticket";
    }
}
public class Test_Compartment{
    public static void main(String args[]){
         Compartment[] compartments=new Compartment[10];
         for(int i=0;i<compartments.length;i++){
            int random =(int)(Math.random()*4)+1;
            switch(random){
                case 1:
                    compartments[i]=new  FirstClass();
                    break;
                case 2:
                        compartments[i]=new Ladies();
                        break;
                case 3:
                    compartments[i]=new General();
                    break;
                case 4:
                    compartments[i]=new Luggage();
                    break;        
            }
         }
         System.out.println("Compartment Tickets");
         for(Compartment c:compartments){
            System.out.println(c.notice());
         }
    }
}