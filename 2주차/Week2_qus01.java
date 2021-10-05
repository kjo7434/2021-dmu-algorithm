import java.io.*;

public class Week2_qus01 () {
    public static void main(String[] args) {
        int n = 1260;
        int coinCnt = 0;
        int [] coinTypes = {500,100,50,10}

        for(int i = 0; i< coinTypes.length, i++ ) {
            coinCnt += n/coinTypes[i];
            n %= coinTypes[i];
        }
        System.out.println(coinCnt);
    } 
}
