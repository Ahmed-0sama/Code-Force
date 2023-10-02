import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);

        int n = sc.nextInt();
        int q = sc.nextInt();

        int[] v = new int[200005];
        int[] vis = new int[200005];

        for (int i = 0; i < n; i++) {
            int val = sc.nextInt();
            if (vis[val] == 0) {
                v[val]++;
                vis[val] = 1;
            }
        }

        for (int i = 1; i < 200005; i++) {
            v[i] += v[i - 1];
        }

        while (q-- > 0) {
            int x = sc.nextInt();
            System.out.println(v[x - 1] + " " + (v[200004] - v[x]));
        }

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

