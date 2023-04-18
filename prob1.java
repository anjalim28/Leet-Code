import java.util.*;

class Main {
    public static boolean check(int x) {
        HashSet<Integer> hs = new HashSet<>();
        while (x > 0) {
            int val = x % 10;
            if (hs.contains(val)) {
                return false;
            } else {
                hs.add(val);
                x /= 10;
            }
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int v1 = sc.nextInt();
        int v2 = sc.nextInt();
        int val = 0;
        for (int i = v1; i <= v2; i++) {
            if (check(i)) {
                val++;
            }
        }
        System.out.println(val);
        sc.close();

    }
}