import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s= sc.next();
        char c=s.charAt(0);
        int car=c;
        if(car==122){
            System.out.println("a");

        }


       else{
            car+=1;

        char fil=(char)car;
        System.out.println(fil);
    }
}
}