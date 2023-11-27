import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int size= sc.nextInt();
        laptop[]arr=new laptop[size];
        for(int i=0; i<size;i++){
          arr[i]=new laptop(sc.nextInt(),sc.nextInt());
        }
        Arrays.sort(arr);
        boolean happy=false;
        for(int i=0; i<size-1;i++){
            if(arr[i].quality>arr[i+1].quality){
               happy=true;

            }

        }
        if(happy) {
            System.out.println("Happy Alex");
        }
        else{
            System.out.println("Poor Alex");
        }
    }
}
 class  laptop implements Comparable<laptop>{
    int price;
    int quality;
    public laptop(int price,int quality){
        this .price=price;
        this.quality=quality;
    }

     @Override
     public int compareTo(laptop o) {
         return price-o.price;
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

