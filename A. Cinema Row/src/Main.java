import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        int []pl =   new int[size];
        int [] pr = new int[size];
        int m=Integer.MIN_VALUE;
        for(int i=0; i<size; i++){
            int x= sc.nextInt();
            arr[i]= x;
             m=Math.max(m,x);
             pl[i]=m;
        }
        m=Integer.MIN_VALUE;
        for(int i=size-1;i>=0;i--){
            m=Math.max(m,arr[i]);
            pr[i]=m;
        }
        for(int i=0; i<size;i++){
            if(arr[i]==pl[i]&&arr[i]== pr[i]){
                System.out.println("both");
            } else if (arr[i]==pl[i]&&arr[i]< pr[i]) {
                System.out.println("left");
            }
            else if(arr[i]== pr[i]&&arr[i]<pl[i]){
                System.out.println("right");
            }
            else{
                System.out.println("none");
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

