import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int times= sc.nextInt();

        String x=sc.next();
        char []arr=x.toCharArray();
        int anton=0;
        int danik=0;
        for(int i=0;i< arr.length;i++){
            if(arr[i]=='D'){
                danik++;
            }
            else {
                anton++;
            }
        }
        if (anton>danik){
            System.out.println("Anton");
        }
        else if(danik>anton){
            System.out.println("Danik");
        }
        else {
            System.out.println("Friendship");
        }

    }
}