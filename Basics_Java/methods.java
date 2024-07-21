public class methods {

    static void myMethod() {
        System.out.println("Working function!");
    }
    static void newMethod(int i, int j) { //pass parameters to a function here
        System.out.println(i + j);
    }

    static void checkPrice(int price) { // use an if statement inside the 
        if(price >= 50) {
            System.out.println("It costs too much!");
        } else {
            System.out.println("I can afford it!");
        }
    }

    static int returnSum(int a, int b) {
        return a + b;
    }
    public static void main(String[] args) {
        myMethod();
        myMethod();
        newMethod(13, 45); // call them here
        checkPrice(34);
        System.out.println(returnSum(123, 234)); // return value inside print line
        int sum = returnSum(10, 90); // allocate variable value with function
        System.out.println(returnSum(13, 23));
        System.out.println(sum);
    }
}
