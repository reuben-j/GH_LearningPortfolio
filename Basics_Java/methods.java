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
    public static void main(String[] args) {
        myMethod();
        myMethod();
        newMethod(13, 45); // call them here
        checkPrice(34);
    }
}
