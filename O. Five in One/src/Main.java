import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            int x = sc.nextInt();
            arr[i] = x;
        }
        max(arr);
        min(arr);
        prime(arr);
        pallindrome(arr);
        getNumWithMaxDivisors(arr);


    }

    public static void max(int[] arr) {
        int maxim = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > maxim) {
                maxim = arr[i];
            }
        }
        System.out.println("The maximum number : " + maxim);
    }

    public static void min(int[] arr) {
        int min = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        System.out.println("The minimum number : " + min);
    }

    static void prime(int[] arr) {
        int prime = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] <= 1) {
                continue;
            }
            boolean isPrime = true;
            for (int j = 2; j <= Math.sqrt(arr[i]); j++) {
                if (arr[i] % j == 0) {
                    // arr[i] is not prime
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                prime++;
            }
        }
        System.out.println("The number of prime numbers : " + prime);
    }
    static void pallindrome(int[] arr) {
        int pallin = 0;
        int val = 0;
        for (int i = 0; i < arr.length; i++) {
            val = arr[i];
            String numberString = Integer.toString(val);

            String reversedString = new StringBuilder(numberString).reverse().toString();

            if (numberString.equals(reversedString)) {
                pallin++;
            }

        }
        System.out.println("The number of palindrome numbers : " + pallin);

    }

    public static void getNumWithMaxDivisors(int[] arr) {
        int maxDivisors = 0;
        int numWithMaxDivisors = 0;

        for (int i = 0; i < arr.length; i++) {
            int divisors = countDivisors(arr[i]);
            if (divisors > maxDivisors) {
                maxDivisors = divisors;
                numWithMaxDivisors = arr[i];
            } else if (divisors == maxDivisors) {
                numWithMaxDivisors = Math.max(numWithMaxDivisors, arr[i]);
            }
        }

        System.out.println("The number that has the maximum number of divisors : "+ numWithMaxDivisors);
    }

    // function to count the number of divisors of a number
    public static int countDivisors(int n) {
        int count = 0;
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                if (n / i == i) {
                    count++;
                } else {
                    count += 2;
                }
            }
        }
        return count;
    }
}