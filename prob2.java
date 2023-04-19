import java.util.Scanner;

public class prob2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // getting array length
        int x = sc.nextInt();
        // creating array
        int arr[] = new int[x];
        for (int i = 0; i < x; i++) {
            arr[i] = sc.nextInt();
        }

        // takeing input to rotate
        int rt = sc.nextInt();
        rt %= x;

        int c = rt + 1;
        while (c != rt) {
            if (c == x) {
                c = 0;
            }
            System.out.println(arr[c++]);
        }
        System.out.println(arr[c]);

    }
}
