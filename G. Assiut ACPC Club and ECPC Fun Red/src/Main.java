import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[1000005];

        for (int i = 1; i <= size; i++) {
            arr[i] = sc.nextInt();

        }

        int query = sc.nextInt();

        int []arr2=new int[1000005];
        while (query>0){
            int l = sc.nextInt() ;
            int r = sc.nextInt() ;
            arr2[l]++;
            arr2[r+1]--;
            query--;
        }
        int count=0;
        for(int i=1;i<=size;i++){
            arr2[i]+=arr2[i-1];
        }
        for(int i=1;i<=size;i++){
            if(arr2[i]==0){
                count++;
            }
        }
        System.out.println(count);
        for(int i=1; i<=size;i++){
            if(arr2[i]==0){
                System.out.print(arr[i]+" ");
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