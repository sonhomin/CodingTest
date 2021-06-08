import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class num1 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] str = br.readLine().split(" ");
        // int num = Integer.parseInt(str[0]); // 배열 선언시

        int a = Integer.parseInt(br.readLine()); //일반 변수 선언시
        br.close();

        for(int i = 1; i<10;i++) {
            System.out.println(a+" * "+i+" = "+(a*i));
        }
    }

}

