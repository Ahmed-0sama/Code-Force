import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size= sc.nextInt();
        int req= sc.nextInt();
       Map<Integer,Integer>m=new HashMap<>();
        List<Integer>list=new ArrayList<>();
        for(int i=1; i<=size;i++){
            int x= sc.nextInt();
            if(!m.containsValue(x)){
                m.put(i,x);
                list.add(i);
            }

        }
        if(m.size()<req){
            System.out.println("NO");
        }
        else{
            System.out.println("YES");
            for(int i=0; i<req;i++){
                System.out.print(list.get(i)+" ");
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

