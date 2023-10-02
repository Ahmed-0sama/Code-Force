import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int queries = sc.nextInt();

        struct[] arr = new struct[4];
        for (int i = 0; i < queries; i++) {

            arr[0] = new struct("Hussien", sc.nextInt());
            arr[1] = new struct("Atef", sc.nextInt());
            arr[2] = new struct("Karemo", sc.nextInt());
            arr[3] = new struct("Ezzat ", sc.nextInt());

            Arrays.sort(arr);
            System.out.println(arr[3].name + " " + arr[2].name);
        }
    }
}

class struct implements Comparable<struct> {
    String name;
    int speed;
    public struct(String name,int Speed){
        this.name=name;
        this .speed=Speed;
    }
    public int compareTo(struct other) {


        return Integer.compare(this.speed, other.speed);
    }
    }

class FastScanner {
    private BufferedReader br;
    private StringTokenizer st;

    public FastScanner(InputStream inputStream) {
        br = new BufferedReader(new InputStreamReader(inputStream));
    }

    public String next() {
        while (st == null || !st.hasMoreTokens()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    public int nextInt() {
        return Integer.parseInt(next());
    }

    public long nextLong() {
        return Long.parseLong(next());
    }

    public double nextDouble() {
        return Double.parseDouble(next());
    }

    public String nextLine() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}
