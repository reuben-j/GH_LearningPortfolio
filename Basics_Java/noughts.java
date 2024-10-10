public class noughts {
    public static void main(String[] args) {
        char arr[][] = {
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' }
        };
        printArr(arr);
        playerTurn(arr, 1, 3, 'X');
        printArr(arr);
    }

    static void printArr(char arr[][]) {
        for (int i = 0; i < 5; i++) {
            for (int y = 0; y < 5; y++) {
                System.out.print(arr[i][y]);
            }
            System.out.println();
        }
        System.out.println("\n------\n");
    }

    static void playerTurn(char arr[][], int hori, int vert, char player) {
        // int vertTemp, horiTemp;
        if (hori == 1)
            hori = 0;
        if (hori == 2)
            hori = 2;
        if (hori == 3)
            hori = 4;

        if (vert == 1)
            vert = 0;
        if (vert == 2)
            vert = 2;
        if (vert == 3)
            vert = 4;

        arr[hori][vert] = player;

    }

}