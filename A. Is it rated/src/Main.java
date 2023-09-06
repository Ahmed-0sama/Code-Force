import java.util.Scanner;



public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[][] arr = new int[size][2];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= 1; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        int rated = 0;
        int maybe = 0;
        for (int i = 0; i <= size - 1; i++) {
            for (int j = 0; j <= 1; j++) {
                if (arr[i][0] != arr[i][1]) {
                    rated++;
                }
            }
        }
        for (int row = 0; row < arr.length - 1; row++) {
            int current = arr[row][1];
            int next = arr[row + 1][1];

            if (current >= next) {

                maybe++;
            }
        }


     if(rated!=0){
         System.out.println("rated");

     } else if (maybe ==size-1) {
         System.out.println("maybe");

     }
     else{
         System.out.println("unrated");
     }
     
    }
}