import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System .in);
        int q = sc.nextInt();
        String x= sc.next();
        String Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        String Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
        StringBuilder sb=new StringBuilder();

        if(q==1){//encryption
            for(int i=0; i<x.length();i++){
            char c=x.charAt(i);
            int index=Original.indexOf(c);
            if(index!=-1){
                sb.append(Key.charAt(index));
            }
            else{
                sb.append(c);
            }
            }

        }
        else { // decrypt
            for (int i = 0; i < x.length(); i++) {
                char c = x.charAt(i);
                int index = Key.indexOf(c);
                if (index != -1) {
                    sb.append(Original.charAt(index));
                } else {
                    sb.append(c);
                }
            }
        }
        System.out.println(sb.toString());
    }
}