import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int n = sc.nextInt(); // number of sections
        ArrayList<Integer> height = new ArrayList<>();
        ArrayList<Integer> count = new ArrayList<>(Collections.nCopies(n, 0));

        for (int i = 0; i < n; i++) {
            int h = sc.nextInt(); // value of each section
            height.add(h);
        }

        int x = 0, after = 1, before = 0;

        while (after < n && height.get(x) >= height.get(after)) {
            count.set(0, count.get(0) + 1);
            x++;
            after++;
        }

        for (int i = 1; i < n - 1; i++) {
            x = i;
            after = i + 1;
            before = i - 1;

            while (before >= 0 && height.get(x) >= height.get(before)) {
                count.set(i, count.get(i) + 1);
                x--;
                before--;
            }

            x = i;
            while (after < n && height.get(x) >= height.get(after)) {
                count.set(i, count.get(i) + 1);
                x++;
                after++;
            }
        }

        x = n - 1;
        before = n - 2;
        while (before >= 0 && height.get(x) >= height.get(before)) {
            count.set(n - 1, count.get(n - 1) + 1);
            x--;
            before--;
        }

        Collections.sort(count);
        System.out.println(count.get(count.size() - 1) + 1); // +1 because of the section that rained on it

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

