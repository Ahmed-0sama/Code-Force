import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();

        int balloons=0;
        for(int i=0;i<size;i++){
            Map<Character,Integer>m=new HashMap<>();
            int stSize= sc.nextInt();
            String s= sc.next();
            char []c=s.toCharArray();
            for(int j=0;j<stSize;j++){
                balloons++;
                Integer previousValue = m.putIfAbsent(c[j], j);
                if (previousValue == null) {
                    balloons++;

                }
            }

            System.out.println(balloons);
            balloons=0;

        }
    }
}