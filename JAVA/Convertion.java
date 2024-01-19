class Convertion{
    public static void main(String[]sri){
        System.out.println("Decimal to Binary       : "+Integer.toBinaryString(25));
        System.out.println("Binary to Decimal       : "+Integer.parseInt("111101",2));
        System.out.println("Decimal to Hexa-Decimal : "+Integer.toHexString(25));
        System.out.println("Hexa-Decimal to Decimal : "+Integer.parseInt("AD",16));
        System.out.println("Decimal to Octal        : "+Integer.toOctalString(20));
        System.out.println("Octal to Decimal        : "+Integer.parseInt("10",8));
    }
}