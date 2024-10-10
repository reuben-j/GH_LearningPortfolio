import java.util.Scanner;

public class noughts {
    public static void main(String[] args) {

        boolean gameWon = false;
        char gameWinner = ' ';

        int numArr[][] = { { 0, 0, 0 },
                { 0, 0, 0 },
                { 0, 0, 0 } };
        char arr[][] = {
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' }
        };
        char playerOne = playerCharSelect(1);
        char playerTwo = playerCharSelect(2);
        printArr(arr);
        for (int i = 0; i < 9; i++) {
            if (gameWon == false) {
                if (i == 0 || i % 2 == 0) {
                    int horiTemp = playerPrompt(playerOne);
                    int vertTemp = playerPrompt(playerOne);

                    while (numArr[horiTemp - 1][vertTemp - 1] == 1) {
                        tryAgain();
                        printArr(arr);
                        horiTemp = playerPrompt(playerTwo);
                        vertTemp = playerPrompt(playerTwo);
                    }
                    playerTurn(arr, numArr, horiTemp, vertTemp, playerOne);
                    printArr(arr);
                    gameWon = checkWin(arr, playerOne);
                    if (gameWon == true)
                        gameWinner = playerOne;
                } else {
                    int horiTemp = playerPrompt(playerTwo);
                    int vertTemp = playerPrompt(playerTwo);

                    // System.out.println(numArr[horiTemp][vertTemp]);
                    while (numArr[horiTemp - 1][vertTemp - 1] == 1) {
                        tryAgain();
                        printArr(arr);
                        horiTemp = playerPrompt(playerTwo);
                        vertTemp = playerPrompt(playerTwo);
                    }
                    playerTurn(arr, numArr, horiTemp, vertTemp, playerTwo);
                    printArr(arr);
                    gameWon = checkWin(arr, playerTwo);
                    if (gameWon == true)
                        gameWinner = playerTwo;
                }
            }
        }

        printArr(arr);
        if (gameWon == true) {
            System.out.println("Well done player: " + gameWinner + "! You won the game!");
        } else {
            System.out.println("Draw!");
        }
    }

    static void printArr(char arr[][]) {
        System.out.println("------\n");
        System.out.println("*********");
        for (int i = 0; i < 5; i++) {
            System.out.print("* ");
            for (int y = 0; y < 5; y++) {
                System.out.print(arr[i][y]);
            }
            System.out.print(" *");
            System.out.println();
        }
        System.out.println("*********");
        System.out.println("\n------\n");
    }

    static int[][] playerTurn(char arr[][], int numArr[][], int hori, int vert, char player) {

        numArr[hori - 1][vert - 1] = 1;
        if (hori == 1) {
            hori = 0;
        }
        if (hori == 2) {
            hori = 2;
        }
        if (hori == 3) {
            hori = 4;
        }
        if (vert == 1) {
            vert = 0;
        }
        if (vert == 2) {
            vert = 2;
        }
        if (vert == 3) {
            vert = 4;
        }
        arr[hori][vert] = player;
        System.out.println('\n');
        return numArr;
    }

    static char playerCharSelect(int player) {
        // String playerOne;
        Scanner myObj = new Scanner(System.in);
        System.out.println("Player " + player + " - what is your character? ");
        String playerStr = myObj.nextLine();
        char playerChar = playerStr.charAt(0);
        return playerChar;
    }

    static int playerPrompt(char player) {
        System.out.println("Player " + player + ", which row would you like to choose?");
        Scanner myObj = new Scanner(System.in);
        int horiChoice = myObj.nextInt();
        return horiChoice;
    }

    static boolean checkWin(char gameBoard[][], char player) {

        if (gameBoard[0][0] == player && gameBoard[0][2] == player && gameBoard[0][4] == player) {
            return true;
        } else if (gameBoard[2][0] == player && gameBoard[2][2] == player && gameBoard[2][4] == player) {
            return true;
        } else if (gameBoard[4][0] == player && gameBoard[4][2] == player && gameBoard[4][4] == player) {
            return true;
        }
        // left to right win conditions for both ^
        else if (gameBoard[0][0] == player && gameBoard[2][0] == player && gameBoard[4][0] == player) {
            return true;
        } else if (gameBoard[0][2] == player && gameBoard[2][2] == player && gameBoard[4][2] == player) {
            return true;

        } else if (gameBoard[0][4] == player && gameBoard[2][4] == player && gameBoard[4][4] == player) {
            return true;
        }
        // top to bottom win conditions for both ^
        else if (gameBoard[0][0] == player && gameBoard[2][2] == player && gameBoard[4][4] == player) {
            return true;
        } else if (gameBoard[0][4] == player && gameBoard[2][2] == player && gameBoard[4][0] == player) {
            return true;
        } else
            // diagonal win conditions for both ^
            return false;
    }

    static void tryAgain() {
        System.out.println("******************************");
        System.out.println("*** Spot taken, try again. ***");
        System.out.println("******************************");
        System.out.print("------------------------------");
    }

}