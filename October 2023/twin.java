import java.io.*;
import java.util.*;

class twin {
    static boolean checkString(String s1, String s2,
            int indexFound, int Size) {
        for (int i = 0; i < Size; i++) {

            if (s1.charAt(i) != s2.charAt((indexFound + i) % Size))
                return false;
        }

        return true;
    }

    // Driver code
    public static void main(String args[]) {
        String s1 = "kyoto";
        String s2 = "tokyo";

        if (s1.length() != s2.length()) {
            System.out.println(
                    "NO");
        } else {

            ArrayList<Integer> indexes = new ArrayList<Integer>(); 
                                                                

            int Size = s1.length();

            char firstChar = s1.charAt(0);

            for (int i = 0; i < Size; i++) {
                if (s2.charAt(i) == firstChar) {
                    indexes.add(i);
                }
            }

            boolean isRotation = false;

            for (int idx : indexes) {
                isRotation = checkString(s1, s2, idx, Size);

                if (isRotation)
                    break;
            }

            if (isRotation)
                System.out.println(
                        "YES");
            else
                System.out.println(
                        "NO");
        }
    }
}

