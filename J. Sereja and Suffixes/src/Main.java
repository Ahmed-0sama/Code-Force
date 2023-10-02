import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size = sc.nextInt();
        int query = sc.nextInt();
        int[] arr = new int[size+5];
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        int []l = new int[size+5];
        Map<Integer, Integer> m = new HashMap<>();
        l[size] = 0;
        for (int i = size-1; i >= 0; i--) {
            if (m.containsKey(arr[i])) {
                l[i] = l[i+1];
            } else {
                l[i] = l[i+1] + 1;
            }
            m.put(arr[i], m.getOrDefault(arr[i], 0) + 1);
        }
        for (int i = 0; i < query; i++) {
            int x = sc.nextInt();
            System.out.println(l[x-1]);
        }
    }
}

class FastScanner {
    private final BufferedReader br;
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