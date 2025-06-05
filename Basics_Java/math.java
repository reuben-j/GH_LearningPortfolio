public class math {
    public static void main(String[] args) {
        // Math.min(a, b) to return min number
        System.out.println(Math.min(13, 10)); //10

        // Math.max to do opposite
        System.out.println(Math.max(99, 99.1)); //99.1

        // Return square root
        System.out.println(Math.sqrt(64)); //8.0

        // Math.abs(value) will return a non-negative value
        int num = -32;
        System.out.println(Math.abs(num)); //32

        // Math.random() returns a random number between 0 and 1
        // multiple by 100 to get random up to that number
        System.out.println(Math.random() * 101); //26.238590821401196

        // for more: https://www.w3schools.com/java/java_ref_math.asp
    }
}
