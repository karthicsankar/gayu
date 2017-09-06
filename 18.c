public class Armstrong {

    public static void main(String[] args) {

        int low = 99, high = 999;

        for(int n = l+ 1; n< h; ++n) {
            int digit = 0;
            int res = 0;
            int originalNumber = n;

            while (originalNumber != 0) {
                originalNumber /= 10;
                ++digit;
            }

            originalNumber = number;

        
            while (originalNumber != 0) {
                int rem = originalNumber % 10;
                result += Math.pow(rem, digit);
                originalNumber /= 10;
            }

            if (res == n)
                System.out.print(n+ " ");
        }
    }
}
