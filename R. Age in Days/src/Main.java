import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ageInDays = sc.nextInt();
        int years = ageInDays / 365;
        ageInDays %= 365;
        int months = ageInDays / 30;
        ageInDays %= 30;
        System.out.println(years + " years");
        System.out.println(months + " months");
        System.out.println(ageInDays + " days");
    }
}