package coderspear.FunctionAndArrays;
import java.util.*;
public class AnyBaseToDecimal {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int b = scn.nextInt();
        int d = getValueIndecimal(n, b);
        System.out.println(d);
     }
    
     public static int getValueIndecimal(int n, int b){
        int sum = 0,i=0;
        while(n!=0){
            int x = n%10;
            sum = sum + (x *(int)Math.pow(b,i++));
            n = n/10;
        }
        return sum;
     }
}
