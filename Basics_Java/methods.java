public class methods {

    static void myMethod() {
        System.out.println("Working function!");
    }
    static void newMethod(int i, int j) {
        System.out.println(i + j);
    }
    public static void main(String[] args) {
        myMethod();
        myMethod();
        newMethod(13, 45);
    }
}
