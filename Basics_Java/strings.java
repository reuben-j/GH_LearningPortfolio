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

        // concatenation
        String str1 = "Hiya";
        String str2 = str1 + " " + "dude";
        System.out.println(str2); // Hiya dude

        // can be done like this also using string.concat(string2)
        String str3 = "Watch";
        String str4 = " out buddy!";
        String str5 = str3.concat(str4);
        System.out.println(str5); // Watch out buddy!

        
    }
}
