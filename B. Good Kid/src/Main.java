import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int attemp= sc.nextInt();
        while (attemp-->0){
            int size= sc.nextInt();
            int []arr=new int[size];
            for(int i=0; i<size;i++){
                arr[i]= sc.nextInt();
            }
            int min=arr[0];
            int index=0;
            for(int i=0;i<size;i++){
                if(min>arr[i]){
                    min=arr[i];
                    index=i;
                }
            }
            arr[index]=min+1;
            int prod=1;
            for(int i=0; i<size;i++){
                prod*=arr[i];
            }
            System.out.println(prod);
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

