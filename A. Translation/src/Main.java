import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        String y= sc.next();
        StringBuilder st=new StringBuilder(y);
        String z= st.reverse().toString();
        if(x.equals(z)){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}