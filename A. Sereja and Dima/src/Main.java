import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        int sereja=0;
        int dima=0;
        for(int i=0;i<size;i++){
            arr[i]= sc.nextInt();
        }
        int l=0; int r=size-1;
        boolean round=true;
        while(l<=r){
            if(arr[l]>=arr[r]){
                if(round){

                sereja+=arr[l];
            }
            else{
                dima+=arr[l];
            }
            l++;
            }
            else if(arr[r]>arr[l]) {
                if (round){
                    sereja+=arr[r];
                }
                else {
                    dima+=arr[r];
                }
                r--;
                }
            if (round){
                round=false;

            }
            else {
                round=true;
            }
        }
        System.out.println(sereja+" "+dima);
        }

    }