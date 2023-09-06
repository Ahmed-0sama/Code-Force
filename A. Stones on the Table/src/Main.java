import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        String x= sc.next();
        char[]c=x.toCharArray();
        int l=0 ,r=l+1;
        int counter=0;
        while (r<size){
            if(c[l]==c[r]){
                counter++;
            }
            l++;
            r++;
        }
        System.out.println(counter);

    }
}