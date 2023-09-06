import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Character> l = new ArrayList<>();
        l.add('q');l.add('w');l.add('e');l.add('r');l.add('t');l.add('y');l.add('u');l.add('i');l.add('o');l.add('p');
        l.add('a');l.add('s');l.add('d');l.add('f');l.add('g');l.add('h');l.add('j');l.add('k');l.add('l');l.add(';');
        l.add('z');l.add('x'); l.add('c');l.add('v');l.add('b');l.add('n');l.add('m');l.add(',');l.add('.');l.add('/');
        String position= sc.next();
        String x= sc.next();
        if(position.equals("R")){
            for(int i=0; i<x.length();i++){
                System.out.print(l.get(l.indexOf(x.charAt(i))-1));
            }
        }
        else{
            for(int i=0;i<x.length();i++){
                System.out.print(l.get(l.indexOf(x.charAt(i))+1));
            }
        }

    }
}