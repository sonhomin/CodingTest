import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class num4 {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int X = Integer.parseInt(br.readLine()); // BufferedReader는 문자열만 입력받기 때문에 자료형을 String에서 int로 변환
        int Y = Integer.parseInt(br.readLine());

        if(X > 0) {
            if(Y > 0) {
                System.out.print(1);
            }
            else {
                System.out.print(4);
            }
        }

        else {
            if(Y > 0) {
                System.out.print(2);
            }
            else {
                System.out.print(3);
            }
        }
    }

}