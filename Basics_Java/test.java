public class test{ // class name must always match filename
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
        String fullName = fname + " " + sname;
        System.out.println(fullName); // Reuben Jarvela
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