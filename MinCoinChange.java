
public class MinCoinChange {
    public int minCoinDynamic(int amount, int[] coins) {

        int[] coinReq = new int[amount+1];

        coinReq[0] = 0;

        for (int amt = 1; amt <= amount; amt++) {
            coinReq[amt] = Integer.MAX_VALUE;
            // Now try taking every coin one at a time and pick the minimum
            for (int j = 0; j < coins.length; j++) {
                if (coins[j] <= amt)
{
                    // select the coin and add 1 to solution of (amount-coin value)
                    coinReq[amt] = Math.min(coinReq[amt - coins[j]] + 1,coinReq[amt]) ;
                }
            }
        }
       
        return coinReq[amount];

    }

    public static void main(String[] args) {
        int[] coins = { 1, 2, 3 };
        int amount = 20;
        MinCoinChange m = new MinCoinChange();
        System.out.println("Minimum Coins required for the amount "
                + amount + " are: " + m.minCoinDynamic(amount, coins));
    }
}

	
	
	
