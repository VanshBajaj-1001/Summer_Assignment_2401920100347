package Week_1.OOPS;

public class LibraryInterfaceDemo {
    public static void main(String args[]){
        KidUser obj=new KidUser();
        obj.age=10;
        obj.registerAccount();
        obj.age=18;
        obj.registerAccount();
        obj.bookType="Kids";
        obj.requestBook();;
        obj.bookType="Fiction";
        obj.requestBook();
        System.out.println("");
        AdultUser a=new AdultUser();
        a.age=5;
    a.registerAccount();
    a.age=23;
    a.registerAccount();
    a.bookType="Kids";
    a.requestBook();
    a.bookType="Fiction";
    a.requestBook();
    }
    
}
