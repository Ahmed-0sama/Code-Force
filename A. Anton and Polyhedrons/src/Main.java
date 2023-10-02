import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int total=0;
        for(int i=0; i<size;i++){
            String x= sc.next();
            switch (x) {
                case "Tetrahedron" -> total += 4;
                case "Cube" -> total += 6;
                case "Octahedron" -> total += 8;
                case "Dodecahedron" -> total += 12;
                default -> total += 20;
            }

        }
        System.out.println(total);
    }
}