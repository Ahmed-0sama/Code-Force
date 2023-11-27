import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int x= sc.nextInt();
        String l=sc.next();
        char[]c=l.toCharArray();
      if(x%2==0){
          char y=c[0];
          char z=c[(x/2)-1];
          c[(x/2)-1]=y;
          c[0]=z;
          String m= Arrays.toString(c);
          System.out.println(c);
      }
      else{
          char y=c[0];
          char z=c[(x/2)+1];
          c[(x/2)+1]=y;
          c[0]=z;
          String m= Arrays.toString(c);
          System.out.println(c);
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

