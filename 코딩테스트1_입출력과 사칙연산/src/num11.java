import java.util.Scanner;

public class num11 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int b100 = b/100; //100의 자리수
        int b10 = (b/10)%10; //10의 자리수
        int b1 = b%10; //1의 자리수
        sc.close();

        System.out.println(a*b1); //(3)
        System.out.println(a*b10); //(3)
        System.out.println(a*b100); //(3)
        System.out.println(a*b); //(3)
    }
}