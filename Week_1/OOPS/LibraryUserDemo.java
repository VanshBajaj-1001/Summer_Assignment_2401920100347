package Week_1.OOPS;

public class LibraryUserDemo {
    public static void main(String args[]){
        KidUser obj=new KidUser();
        obj.age=10;
        obj.registerAccount();
        obj.age=18;
        obj.registerAccount();
        obj.bookType="Kids";
        obj.requestBook();
        obj.bookType="Fiction";
        obj.requestBook();

        AdultUser ad=new AdultUser();
         ad.age=5;
        ad.registerAccount();
        ad.age=23;
        ad.registerAccount();
        ad.bookType="Kids";
        ad.requestBook();
        ad.bookType="Fiction";
        ad.requestBook();

    }
    
}
