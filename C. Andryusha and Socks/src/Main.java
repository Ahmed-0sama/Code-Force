import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size= sc.nextInt();
        if(size==1){
            int s1= sc.nextInt();
            int s2= sc.nextInt();
            System.out.println("1");
        }
        else{
            int []arr=new int[size+1];
            int count=0;
            int table=0;
            for(int i=0; i<size*2;i++){
                int so= sc.nextInt();
                if(arr[so]==0){
                    arr[so]++;
                    table++;
                    count=Math.max(table,count);
                }
                else{
                    table--;
                }
            }
            System.out.println(count);


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

