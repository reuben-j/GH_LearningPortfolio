public class syntaxAndVariabes{ // class name must always match filename
    public static void main(String[] args) { // any code inside main will be executed. Main must be included in every program
        System.out.print("Hello world!\n"); // print to console
        System.out.println("Test"); // using print over println will mean a new line is not added after line is printed
        System.out.println(123 + 123); // print a number with double quotes. Math can be done here also

        int num = 15;
        System.out.println(num); //15

        String name = "Reuben";
        System.out.println(name); // Reuben

        char letter; // declare variable without allocating value
        letter = 'A';
        System.out.println(letter); // A

        final int age = 24; // use final in place of const, unchangeable value
        System.out.println(age); // 24

        float flt = 3.234f;
        System.out.println(flt); // 3.234

        boolean codingYes = true;
        System.out.println(codingYes); // true

        String fname = "Reuben";
        String sname = "Jarvela";
        String fullName = fname + " " + sname; // join strings with '+'
        System.out.println(fullName); // Reuben Jarvela

        // declare multiple variables at once
        int x = 12, y = 15, z = 20;
        System.out.println(x + y + z); //47

        // one value to multiple variables
        int a, b, c;
        a = b = c = 15;
        System.out.println(a + b + c); //45

        // primitive data types:
        // byte, size of 1 byte, can store whole numbers from -128 to 127
        byte newByte = 23;
        
        // short, size of 3 bytes, can store whole numbers from -32,768 to 32,767
        short newShort = 31001;

        // int, size of 4 bytes, can store whole numbers from -2,147,483,648 to 2,147,483,647
        int newInt = 1233456;

        // long, size of 8 bytes, stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
        long newLong = 1421431353L;

        //float, size of 4 bytes, sufficient for storing 6 to 7 decimal digits
        float newFloat = 3.142f;

        // double, size of 8 bytes, Sufficient for storing 15 decimal digits
        double newDouble = 3.1415926538979d;

        // boolean, size of 1 byte, holds true or false
        boolean newBool = true;

        // char, size of 2 bytes, stores a single letter or ascii value
        char newChar = '&';

        System.out.println(newByte + newShort + newInt + newLong + newFloat + newDouble); //1.4226958111415927E9
        System.out.println(newBool); //true
        System.out.println(newChar); // &

        // type casting, if value goes to a variable that is a larger size, it is automatic
        // known as widening casting
        byte myByte = 12;
        int myInt = myByte;
        System.out.println(myByte + myInt); //24

        // if the values goes to a var that is smaller in byte size, it must be done manually
        // known as narrowing casting
        double myDouble = 1234.56d;
        int myNewInt = (int) myDouble;

        System.out.println(myDouble); // 1234.56
        System.out.println(myNewInt); // 1234

        // e.g percentages
        int myScore = 78;
        float percent = (float) myScore / 100 * 100.00f;
        System.out.println(percent); // 78.0
    }
}

// to compile java, type in terminal:
// javac 'filename'.java
//* e.g javac test.java

// to run java code
// java 'filename'
//* e.g java test

// to run a java file from terminal, first open a textedit doc, convert to basic text (not rich one) and save with file type of java
// open terminal, find correct folder it is on and then use the above compiling and calling 