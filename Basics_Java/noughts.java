public class noughts {

    public static void main(String[] args) {
        int arr[][] = {{ 1, 2, 3, 4}, { 1, 2, 3, 4}};
        for (int i = 0; i < 3; i++) {
            for(int y = 0; y < 4; y++) {
                System.out.println(arr[i][y]);
            }
        }
    }
}