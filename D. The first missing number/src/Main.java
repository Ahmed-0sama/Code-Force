import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        boolean[]arr=new boolean[M*2+1];
        for(int i=0; i<N;i++){
            int a=scanner.nextInt();
            arr[a+M]=true;
        }
        int isabsent=-1;
        for(int j=-M;j<=M;j++){
            if(!arr[j+M]){
                isabsent=j;
                break;
            }
        }
        System.out.println(isabsent);
    }
}
