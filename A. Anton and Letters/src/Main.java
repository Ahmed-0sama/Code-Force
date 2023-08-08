import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String x= sc.nextLine();
        char []arr=x.toCharArray();


         Map<Character,Integer>m=new HashMap<>();
        for(int i=0;i< arr.length;i++){
            if (arr[i] =='{'||arr[i]=='}'||arr[i]==','||arr[i]==' ') {
                continue;
            }
            else{
            m.putIfAbsent(arr[i],i);
        }}
        int c=m.size();
        System.out.println(c);

    }
}