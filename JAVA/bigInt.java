import java.math.BigInteger;

public class bigInt {
    public static String addBinary(String a, String b) {
        return new BigInteger(a, 2).add(new BigInteger(b, 2)).toString(2);
    }

    public static String addDecimal(String x, String y) {
        return new BigInteger(x, 2).add(new BigInteger(y, 2)).toString();
    }

    public static String factorial(int n) {
        BigInteger fact = BigInteger.valueOf(n);
        for (int i = n - 1; i > 1; i--)
            fact = fact.multiply(BigInteger.valueOf(i));
        return fact.toString();
    }

    public static void main(String[] args) {
        String a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101",
                b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
        System.out.println("Binary_Addition:\n" + addBinary(a, b));
        System.out.println("Decimal_Addition:\n" + addDecimal(a, b));
        System.out.println("Factorial of 1000:\n" + factorial(1000));
        System.out.println("Gcd 6-12:\n" + new BigInteger("12").gcd(new BigInteger("6")).intValue());
        BigInteger divisionResult[] = new BigInteger(b).divideAndRemainder(new BigInteger(a));
        System.out.println("Quotient : " + divisionResult[0] + "\nRemainder : " + divisionResult[1]);
    }
}