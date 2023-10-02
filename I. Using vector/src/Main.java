import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner(System.in);
        int size = sc.nextInt();
        int attempt = sc.nextInt();
        Vector<Integer> v = new Vector<>(size);

        for (int i = 0; i < size; i++) {
            int x = sc.nextInt();
            v.add(x);
        }


        for (int i = 0; i < attempt; i++) {
            String query = sc.next();
            if (query.equals("pop_back")) {
                    v.remove(v.size() - 1);

            } else if (query.equals("front")) {
                System.out.println(v.firstElement());
            } else if (query.equals("back")) {
                System.out.println(v.elementAt(v.size() - 1));
            } else if (query.equals("print")) {
                int index = sc.nextInt() - 1;
                System.out.println(v.elementAt(index));
            } else if (query.equals("sort")) {
                int startIndex = sc.nextInt() - 1;
                int lastIndex = sc.nextInt();

              Vector<Integer>subList = new Vector<>(v.subList(startIndex,lastIndex));
                Collections.sort(subList);

                int subListIndex = 0;
                for (int j = startIndex; j < lastIndex; j++) {
                    v.set(j, subList.get(subListIndex));
                    subListIndex++;
                }
            } else if (query.equals("push_back")) {
                int newValue = sc.nextInt();
                v.add(newValue);
            } else if (query.equals("reverse")) {
                int startIndex = sc.nextInt() - 1;
                int lastIndex = sc.nextInt();

                // Create a sublist and reverse it
                Vector<Integer>subList=new Vector<>(v.subList(startIndex,lastIndex));
                Collections.reverse(subList);

                // Update the original vector with the reversed sublist
                int subListIndex = 0;
                for (int j = startIndex; j < lastIndex; j++) {
                    v.set(j, subList.get(subListIndex));
                    subListIndex++;
                }
            }
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