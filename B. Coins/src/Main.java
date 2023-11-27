import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        String x= sc.next();
        Map<Character,Integer>m=new HashMap<>();
        m.put('A',0);
        m.put('B',0);
        m.put('C',0);
        if(x.charAt(1)=='>'){
            m.put(x.charAt(0),m.get(x.charAt(0))+1);
        }
        else{
            m.put(x.charAt(2),m.get(x.charAt(2))+1);
        }
        String y= sc.next();
        if(y.charAt(1)=='>'){
            m.put(y.charAt(0),m.get(y.charAt(0))+1);
        }
        else{
            m.put(y.charAt(2),m.get(y.charAt(2))+1);
        }
        String z= sc.next();
        if(z.charAt(1)=='>'){
            m.put(z.charAt(0),m.get(z.charAt(0))+1);
        }
        else{
            m.put(z.charAt(2),m.get(z.charAt(2))+1);
        }
        if(m.get('A')==1&&m.get('B')==1&&m.get('C')==1){
            System.out.println("Impossible");
        }
        else{
            if(m.get('A')==0){
                System.out.print('A');
            }
            else if (m.get('B')==0){
                System.out.print('B');
            }
            else if(m.get('C')==0){
                System.out.print('C');
            }
            if(m.get('A')==1){
                System.out.print('A');
            }
            else if (m.get('B')==1){
                System.out.print('B');
            }
            else if(m.get('C')==1){
                System.out.print('C');
            }
            if(m.get('A')==2){
                System.out.print('A');
            }
            else if (m.get('B')==2){
                System.out.print('B');
            }
            else if(m.get('C')==2){
                System.out.print('C');
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

