package Week_2.OOPS.music.Wind;
import Week_2.OOPS.music.Playable;
public class Saxophone implements Playable {
    @Override
    public void play(){
        System.out.println("This is Saxophone");
        System.out.println("Playing Saxophone");
    }
}
