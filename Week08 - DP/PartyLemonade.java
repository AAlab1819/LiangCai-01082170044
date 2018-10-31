import java.math.BigInteger;
import java.util.Scanner;

public class PartyLemonade {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        BigInteger minimumCost = new BigInteger("4000000000000000000");
        int bottleType; //types of bottle available
        int lemonadeRequired; //required amount of lemonade

        bottleType = in.nextInt();
        lemonadeRequired = in.nextInt();
        int prices[] = new int[bottleType];

        for(int i=0; i<bottleType; i++) {
            prices[i] = in.nextInt();
        }

        for(int i=0; i<bottleType-1; i++) {
            if(prices[i+1] >= 2*prices[i]) { //if buying 2 of current bottle type is cheaper than buying one of the next type
                prices[i+1] = 2*prices[i];
            }
        }

        int currentBottleAmount;
        BigInteger tempBuyPrice = BigInteger.valueOf(0);
        BigInteger a, b; //temporary variable to do arithmetic operations with BigInteger
        for(int i=bottleType-1; i>=0; i--) {
            //amount of bottle needed (current iteration)
            currentBottleAmount = lemonadeRequired/(int)Math.pow(2, i);

            //current bottle amount * current bottle price
            a = new BigInteger(Integer.toString(currentBottleAmount));
            b = new BigInteger(Integer.toString(prices[i]));
            tempBuyPrice = tempBuyPrice.add(a.multiply(b));
            lemonadeRequired -= currentBottleAmount * (int)Math.pow(2, i);

            //finding minimum cost, comparing current minimum cost to (current bottle amount * current bottle price)
            a = new BigInteger(Integer.toString(lemonadeRequired>0 ? 1 : 0));
            b = new BigInteger(Integer.toString(prices[i]));
            b = tempBuyPrice.add(a.multiply(b));
            if(minimumCost.compareTo(b) == 1) { //if(minimumCost > b): (minimumCost is not minimum -> we replace minimumCost)
                minimumCost = b;
            }
        }
        System.out.println(minimumCost);
        in.close();
    }
}