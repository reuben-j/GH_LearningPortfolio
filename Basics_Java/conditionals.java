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

        // while loop
        int i = 0;
        while (i < 5) {
            System.out.println(i); // 0 1 2 3 4
            i++;
        }

        // do while loop
        int x = 0;
        do {
            System.out.println("Still going!");
            x++;
        } while (x < 3); //x3 Still going!

        // for loop
        for(int y = 0; y < 4; y++) {
            System.out.println(y); // 0 1 2 3
        }
        int q = 0, w = 0;
        // nested loop
        for(int a = 0; a < 5; a++) {
            System.out.print("a:");
            System.out.println(q);
            q++;
            for(int b = 0; b < 2; b++) {
                System.out.print("b:");
                System.out.println(w);
                w++;
            }
        }

        // for each loop
        int array[] = {12, 23, 34, 45};
        for (int I : array) {
            System.out.println(I); // 12 23 34 45
        }
    }
}
