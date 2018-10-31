import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class MiraiStone {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        int stone_amt = in.nextInt(); //amount of stones
        BigInteger stones[] = new BigInteger[stone_amt]; //store cumulative sum of stone's cost
        BigInteger stones_sorted[] = new BigInteger[stone_amt]; //store cumulative sum of stone's cost (sorted)
        BigInteger temp_sum = BigInteger.valueOf(0); //needed to make a cumulative array
        for(int i=0; i<stone_amt; i++) {
            stones_sorted[i] = in.nextBigInteger();
            temp_sum = temp_sum.add(stones_sorted[i]);
            stones[i] = temp_sum;
        }
        Arrays.sort(stones_sorted);
        temp_sum = BigInteger.valueOf(0);
        for(int i=0; i<stone_amt; i++) {
            temp_sum = temp_sum.add(stones_sorted[i]);
            stones_sorted[i] = temp_sum;
        }

        int question_amt = in.nextInt(); //amount of questions
        int type, l, r; //description of question
        for(int i=0; i<question_amt; i++) {
            type = in.nextInt();
            l = in.nextInt();
            r = in.nextInt();
            r--; l--;
            switch(type) {
            case 1:
                if(l==0) {
                    System.out.println(stones[r]);
                } else {
                    try {
                        System.out.println(stones[r].subtract(stones[l-1]));
                    } catch(ArrayIndexOutOfBoundsException e) {
                        System.out.println(stones[r].subtract(stones[l]));
                    }
                }
                break;
            case 2:
                if(l==0) {
                    System.out.println(stones_sorted[r]);
                } else {
                    try {
                        System.out.println(stones_sorted[r].subtract(stones_sorted[l-1]));
                    } catch(ArrayIndexOutOfBoundsException e) {
                        System.out.println(stones_sorted[r].subtract(stones_sorted[l]));
                    }
                }
                break;
            }
        }
    }
}