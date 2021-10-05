import java.util.Arrays;
class Week4_qus01 {
public static void zeroBack(int[] array) {
    int j = 0;
    for (int item : array) {
        if (item != 0) {
            array[j] = item;
            j++;
        }
    }
    for (int i = j; i < array.length; i++) {
        array[i] = 0;
    }
}

public static void main(String[] args) {
    int[] array = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    
    zeroBack(array);
    
    System.out.println(Arrays.toString(array));

    }
}