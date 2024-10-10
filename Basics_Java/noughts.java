public class noughts {
    public static void main(String[] args) {
        char arr[][] = {
            {' ', '|', ' ', '|', ' '},
            {'-', '+', '-', '+', '-'},
            {' ', '|', ' ', '|', ' '},
            {'-', '+', '-', '+', '-'},
            {' ', '|', ' ', '|', ' '}
           };
         printArr(arr);
    }


static void printArr(char arr[][]) {
    for (int i = 0; i < 5; i++) {
        for(int y = 0; y < 5; y++) {
            System.out.print(arr[i][y]);
        }
        System.out.println();
    }
}



}