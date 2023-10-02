import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size= sc.nextInt();
        while(size-->0){
            String x=sc.next();
            boolean me=true;
            int coins=0;
            while(me){
                me=false;
                for(int i=0;i<x.length()-1;i++){
                    if(x.charAt(i)=='A'&&x.charAt(i+1)=='B'){
                        coins++;
                        me=true;
                        i++;
                    } else if (x.charAt(i)=='B'&&x.charAt(i+1)=='A') {
                        coins++;
                        me=true;
                        i++;

                    }
                }


            if(me){
               x= x.replace("AB","BC");
                x=x.replace("BA","CB");

            }
        }
            System.out.println(coins);
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

