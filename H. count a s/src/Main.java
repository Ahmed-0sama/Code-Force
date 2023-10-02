import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

 public class Main {
     public static void main(String[] args) {

         FastScanner sc = new FastScanner(System.in);
         String x= sc.next();
         char[]c=x.toCharArray();
         int []arr=new int[c.length+9];
         for(int i=0;i< x.length();i++){
             if(c[i]=='a'){
                 arr[i]++;
             }
         }
         int z= sc.nextInt();
         for(int m=0;m<z;m++){
         int k= sc.nextInt()-1;
         int y= sc.nextInt()-1;
             int sum=0;
         for(int i=k;i<=y;i++){

             sum+=arr[i];
         }
             System.out.println(sum);

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

