import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      String x= sc.next();
      char[]c=x.toCharArray();
      for(int i=0;i< c.length;i++){
          if(c[i]>'4'){
              c[i]=(char) ('9'-c[i]+'0');
          }
      }
      if(c[0]=='0'){
          c[0]='9';
      }
      String res=new String(c);
        System.out.println(res);
    }
}
