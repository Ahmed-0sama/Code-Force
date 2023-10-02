import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int attemp = sc.nextInt();
        long[] A = new long[size + 1];
        long[] pre =new long[size+9];
        for(int i=1;i< size+1;i++){
            A[i] = sc.nextLong();
            pre[i]=pre[i-1]+A[i];
        }
        for(int i=0;i<attemp;i++){
            long res;
            int y= sc.nextInt();
            int x= sc.nextInt();
            res=pre[x]-pre[y-1];
            System.out.println(res);
        }

    }
}