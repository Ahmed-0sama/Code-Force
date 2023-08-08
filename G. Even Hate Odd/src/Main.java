import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int attemps= sc.nextInt();
        for(int i=0;i<attemps;i++){
            int size= sc.nextInt();
            int []arr= new int[size];
            int even=0;
            int odd=0;
            for(int j=0;j<size;j++){
                arr[j]= sc.nextInt();
                if(arr[j]%2!=0){
                    odd++;
                }
                else {
                    even++;
                }
            }
            if(size%2!=0){
                System.out.println("-1");
            }
            else {
                int finale=0;
                int min=Math.min(odd,even);
                for(int k=min;k<size/2;k++ ){
                    finale++;
                }
                System.out.println(finale);
            }
        }
    }
}