import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);

        int size = sc.nextInt();
        struct[] arr = new struct[size];
        for (int i = 0; i < size; i++) {
            arr[i] = new struct();
            arr[i].name = sc.next();
            arr[i].Arbic = sc.nextInt();
            arr[i].Math = sc.nextInt();
            arr[i].Science = sc.nextInt();
            arr[i].English = sc.nextInt();
            arr[i].sum = arr[i].Arbic + arr[i].Math + arr[i].Science + arr[i].English;
        }
        Arrays.sort(arr, new Comparator<struct>() {
            @Override
            public int compare(struct o1, struct o2) {

                int m= Integer.compare(o2.sum,o1.sum);
                if(m==0){
                    return o1.name.compareTo(o2.name);
                }
                return m;
            }
        });
        for(int i=0; i<size;i++){
            System.out.println(arr[i].name+" "+arr[i].sum+" "+arr[i].Arbic+" "+arr[i].Math+" "+arr[i].Science+" "+arr[i].English);
        }


    }

}

class struct{
    String name;
    int sum;
    int Arbic;
    int Math;
    int Science;
    int English;
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

