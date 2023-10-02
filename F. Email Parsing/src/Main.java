import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);

        String x= sc.nextLine();
        char[]arr=x.toCharArray();
        boolean at=true;
        int atfound=0;
        int index=0;
        int index2=0;
        boolean dot=true;
        int dotfount=0;
        boolean inbetween=true;
        for(int i=0; i< arr.length;i++){
            if(arr[i]=='@') {
                atfound  ++;
                index=i;
                if (arr[0] == '@') {
                    at = false;

                }
            }
            if(arr[i]=='@'&&i>0&&i!= arr.length-1&&arr[i+1]=='.')
            {
                inbetween=false;
            }
            if (arr[i]=='.') {
                dotfount++;
                index2=i;
              if (arr[arr.length - 1] == '.') {
                    dot = false;

                }
            }
        }
        if(at&&dot&&atfound==1&&dotfount==1&&index<index2&&inbetween){
            System.out.println("yes");
        }
        else{
            System.out.println("no");
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

