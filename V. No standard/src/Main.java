import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int q = input.nextInt();

        long[] v = new long[n + 1];
        long[] par = new long[n + 2];
        long[] no = new long[n + 2];
        Map<Integer, Integer> mp = new HashMap<>();

        for (int i = 1; i <= n; i++) {
            v[i] = input.nextLong();
        }

        for (int i = 0; i < q; i++) {
            int l = input.nextInt();
            int r = input.nextInt();
            par[l]++;
            no[r + 1] += (r - l + 1);
            mp.put(r + 1, mp.getOrDefault(r + 1, 0) + 1);
        }

        long x = 0;
        long cntr = 0;

        for (int i = 1; i <= n; i++) {
            if (par[i] > 0) {
                x += par[i];
            }
            if (no[i] > 0) {
                x -= mp.getOrDefault(i, 0);
                cntr -= no[i];
            }
            cntr += x;
            v[i] += cntr;
            System.out.print(v[i] + " ");
        }
    }
}
