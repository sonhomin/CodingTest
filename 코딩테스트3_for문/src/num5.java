import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class num5 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        br.close();

        int i = 1;
        while(i<= N) {
            System.out.println(i);
            i++;
        }
    }
}