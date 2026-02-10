import java.util.Scanner;

public class Add {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b,c;
        System.out.println("Enter any two number:");
        a=scan.nextInt();
        b=scan.nextInt();
        c=a+b;
        System.out.println("Sum="+c);
        System.out.printf("Sum of %d and %d is %d\n",a,b,c);
    }
}
