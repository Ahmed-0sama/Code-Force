import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner(System.in);
        int size = sc.nextInt();
        Struct[] arr = new Struct[size];

        for (int i = 0; i < size; i++) {
            arr[i] = new Struct(); 
            arr[i].name = sc.next();
            arr[i].val = sc.nextInt();
        }

        Arrays.sort(arr, Collections.reverseOrder());

        for (int i = 0; i < size; i++) {
            System.out.println(arr[i].name + " " + arr[i].val);
        }
    }
}

class Struct implements Comparable<Struct> {
    String name;
    int val;

    @Override
    public int compareTo(Struct other) {
        // Define how two Struct objects should be compared (e.g., by val)
        return Integer.compare(this.val, other.val);
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
