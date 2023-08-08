import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int police=0;
        int crimes=0;
        for(int i=0;i<size;i++){
            int x= sc.nextInt();
            if(x==-1){
                if(police>0){
                    police--;
                }
                else {
                    crimes++;
                }
            }
            else{
                police+=x;
            }
        }
        System.out.println(crimes);

    }
}