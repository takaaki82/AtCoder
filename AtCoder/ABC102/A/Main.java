package ABC102.A;

import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        PrintWriter out = new PrintWriter(System.out);
        Scanner sc = new Scanner(System.in);
        TaskA task = new TaskA();
        task.solve(sc, out);
        out.flush();
        sc.close();
    }
    static class TaskA{
        void solve(Scanner sc, PrintWriter out){
            long n = nlong(sc);
            if (n%2==0){
                out.println(n);
            }else {
                out.println(n*2);
            }
        }
    }

    static int nint(Scanner sc){
        return Integer.parseInt(sc.next());
    }
    static long nlong(Scanner sc){
        return Long.parseLong(sc.next());
    }
    static double ndouble(Scanner sc){
        return Double.parseDouble(sc.next());
    }
    static float nfloat(Scanner sc){
        return Float.parseFloat(sc.next());
    }
    static String nstr(Scanner sc){
        return String.valueOf(sc.next());
    }
    static long[] longLine(Scanner sc, int size){
        long[] lLine = new long[size];
        for (int i = 0; i < size; i++) {
            lLine[i] = nlong(sc);
        }
        return lLine;
    }
    static int[] intLine(Scanner sc, int size){
        int[] iLine = new int[size];
        for (int i = 0; i < size; i++) {
            iLine[i] = nint(sc);
        }
        return iLine;
    }
    static String[] strLine(Scanner sc, int size){
        String[] strLine = new String[size];
        for (int i = 0; i < size; i++) {
            strLine[i] = nstr(sc);
        }
        return strLine;
    }
}

