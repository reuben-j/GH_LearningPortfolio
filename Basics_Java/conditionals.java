public class conditionals {
    public static void main(String[] args) {
        int num = 50;
        int num2 = 25;
        if (num < num2) {
            System.out.println("num less than num2");
        } else if (num == num2) {
            System.out.println("There are equal");
        } else {
            System.out.println("Num2 is smaller than num");
        }

        // shorthand if else statement, same as cpp
        String result = (num > num2) ? "Num bigger" : "Num smaller";
        System.out.println(result); //num bigger

        // switch statements
        int age = 24;
        switch (age) {
            case 23:
                System.out.println("He is 23!");
                break;
            case 24:
                System.out.println("He is 24!"); // this one is printed
                break;
            default:
                System.out.println("He is another age!");
        }




    }
}
