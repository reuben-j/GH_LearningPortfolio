public class strings {
    public static void main(String[] args) {

        // string.length()
        String name = "Reuben";
        System.out.println(name.length()); //6

        String lowerToUpper = "ahhh";
        System.out.println(lowerToUpper.toUpperCase()); //AHHH

        String higherToLower = "YOOO";
        System.out.println(higherToLower.toLowerCase()); // yooo

        // string.indexOf to return index of target string,
        // if not found will return -1
        String lookingforMe = "Today I was at home alone, just me";
        System.out.println(lookingforMe.indexOf("me")); //17

        // concantenation
    }
}
