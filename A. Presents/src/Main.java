import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        Map<Integer,Integer>m=new HashMap<>();
        for(int i=0; i<size;i++){
           m.put(i,sc.nextInt()-1);
        }
        int []arr2=new int[size];

            for(int i=0;i<size;i++){
                int x=m.get(i);
                arr2[x]=i;
            }
            for(int i=0; i<size;i++){
                System.out.print(arr2[i]+1+" ");
            }

    }
}