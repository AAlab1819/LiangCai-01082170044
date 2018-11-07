import java.util.Scanner;

public class SuperSale {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int testCase;
        int objectAmt;
        int people;
        int maximumWeight;
        int answer;
        int[] dpTable = new int[31];

        testCase = in.nextInt();
        while(testCase>0) {
            testCase--;
            answer = 0;
            for(int i=0; i<30; i++) {
                dpTable[i] = 0;
            }
            objectAmt = in.nextInt();
            int[] weight = new int[objectAmt];
            int[] price = new int[objectAmt];
            for(int i=0; i<objectAmt; i++) {
                price[i] = in.nextInt();
                weight[i] = in.nextInt();
            }

            for(int i=0; i<objectAmt; i++) {
                for(int j=30; j>=0; j--) {
                    try{
                        //if current item is under weight limit and current price is smaller than sum of other possible item and price for item
                        if(dpTable[j]<dpTable[j-weight[i]]+price[i] && weight[i]<=j) {
                            dpTable[j] = dpTable[j-weight[i]]+price[i];
                        }
                    } catch(ArrayIndexOutOfBoundsException e) {
                        continue;
                    }
                }
            }

            people = in.nextInt();
            for(int i=0; i<people; i++) {
                maximumWeight = in.nextInt();
                answer += dpTable[maximumWeight];
            }
            System.out.println(answer);
        }
        in.close();
    }
}