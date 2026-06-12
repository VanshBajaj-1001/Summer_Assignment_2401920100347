package Week_2.OOPS.live;
import Week_2.OOPS.music.Playable;
import Week_2.OOPS.music.string.Venaa;
import Week_2.OOPS.music.Wind.Saxophone;
public class Test {
    public static void main(String args[]){
       Venaa v=new Venaa();
       v.play();
       Saxophone s=new Saxophone();
       s.play();

       // variable of type Playable
       Playable p;
       p=new Venaa();
       p.play();

       p=new Saxophone();
       p.play();
    }
}
