import java.util.Scanner;

public class noughts {
    public static void main(String[] args) {

        boolean gameWon = false;
        char gameWinner = ' ';

        int numArr[][] = {{0, 0, 0}, 
                          {0, 0, 0}, 
                          {0, 0, 0}};
        char arr[][] = {
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' },
                { ' ', '|', ' ', '|', ' ' }
        };
        char playerOne = playerOneCharSelect();
        char playerTwo = playerTwoCharSelect();
        System.out.println("\n------\n");
        printArr(arr);
        for (int i = 0; i < 9; i++) {
            if (gameWon == false) {
                if (i == 0 || i % 2 == 0) {
                    int horiTemp = playerOneHoriPrompt(playerOne);
                    int vertTemp = playerOneVertPrompt(playerOne);
                    playerTurn(arr, numArr, horiTemp, vertTemp, playerOne);
                    printArr(arr);
                    gameWon = checkWin(arr, playerOne, playerTwo);
                    if(gameWon == true) gameWinner = playerOne;
                } else {
                    int horiTemp = playerTwoHoriPrompt(playerTwo);
                    int vertTemp = playerTwoVertPrompt(playerTwo);
                    playerTurn(arr, numArr, horiTemp, vertTemp, playerTwo);
                    printArr(arr);
                    gameWon = checkWin(arr, playerOne, playerTwo);
                    if(gameWon == true) gameWinner = playerTwo;
                }
            }
            
            
        }

        printArr(arr);
        System.out.println("Well done player: " + gameWinner + ", you won the game!");
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

    static void playerTurn(char arr[][], int numArr[][], int hori, int vert, char player) {

        int horiNumArr, vertNumArr;
        if (hori == 1)
            hori = 0;
            horiNumArr = 0;
        if (hori == 2)
            hori = 2;
            horiNumArr = 1;
        if (hori == 3)
            hori = 4;
            horiNumArr = 2;

        if (vert == 1)
            vert = 0;
            vertNumArr = 0;
        if (vert == 2)
            vert = 2;
            vertNumArr = 1;
        if (vert == 3)
            vert = 4;
            vertNumArr = 2;

        arr[hori][vert] = player;
        numArr[horiNumArr][vertNumArr] = 1;
        for(int i = 0; i < 3; i++) {
            for(int y = 0; y < 3; y++) {
                System.out.println("-" + numArr[i][y] + "-");
            }
        }
    }

    static char playerOneCharSelect() {
        // String playerOne;
        Scanner myObj = new Scanner(System.in);
        System.out.println("Player one - what is your character? ");
        String playerStr = myObj.nextLine();
        char playerOne = playerStr.charAt(0);
        return playerOne;
    }

    static char playerTwoCharSelect() {
        // String playerOne;
        Scanner myObj = new Scanner(System.in);
        System.out.println("Player two - what is your character? ");
        String playerStr = myObj.nextLine();
        char playerTwo = playerStr.charAt(0);
        return playerTwo;
    }

    ///////////////////////////////////////////////////////////////////////////////

    static int playerOneHoriPrompt(char player) {
        System.out.println("Player " + player + ", which row would you like to choose?");
        Scanner myObj = new Scanner(System.in);
        int horiChoice = myObj.nextInt();
        return horiChoice;
    }

    static int playerOneVertPrompt(char player) {
        System.out.println("Player " + player + ", which column would you like to choose?");
        Scanner myObj = new Scanner(System.in);
        int horiChoice = myObj.nextInt();
        return horiChoice;
    }

    static int playerTwoHoriPrompt(char player) {
        System.out.println("Player " + player + ", which row would you like to choose?");
        Scanner myObj = new Scanner(System.in);
        int horiChoice = myObj.nextInt();
        return horiChoice;
    }

    static int playerTwoVertPrompt(char player) {
        System.out.println("Player " + player + ", which column would you like to choose?");
        Scanner myObj = new Scanner(System.in);
        int horiChoice = myObj.nextInt();
        return horiChoice;
    }

    ///////////////////////////////////////////////////////////////////////////////

    static boolean checkWin(char gameBoard[][], char player1, char player2) {
        if (gameBoard[0][0] == player1 && gameBoard[0][2] == player1 && gameBoard[0][4] == player1) {
            return true;
        } else if (gameBoard[0][0] == player2 && gameBoard[0][2] == player2 && gameBoard[0][4] == player2) {
            return true;
        } else if (gameBoard[2][0] == player1 && gameBoard[2][2] == player1 && gameBoard[2][4] == player1) {
            return true;
        } else if (gameBoard[2][0] == player2 && gameBoard[2][2] == player2 && gameBoard[2][4] == player2) {
            return true;
        } else if (gameBoard[4][0] == player1 && gameBoard[4][2] == player1 && gameBoard[4][4] == player1) {
            return true;
        } else if (gameBoard[4][0] == player2 && gameBoard[4][2] == player2 && gameBoard[4][4] == player2) {
            return true;
        }
        // left to right win conditions for both ^
        else if (gameBoard[0][0] == player1 && gameBoard[2][0] == player1 && gameBoard[4][0] == player1) {
            return true;
        } else if (gameBoard[0][0] == player2 && gameBoard[2][0] == player2 && gameBoard[4][0] == player2) {
            return true;
        } else if (gameBoard[0][2] == player1 && gameBoard[2][2] == player1 && gameBoard[4][2] == player1) {
            return true;
        } else if (gameBoard[0][2] == player2 && gameBoard[2][2] == player2 && gameBoard[4][2] == player2) {
            return true;
        } else if (gameBoard[0][4] == player1 && gameBoard[2][4] == player1 && gameBoard[4][4] == player1) {
            return true;
        } else if (gameBoard[0][4] == player2 && gameBoard[2][4] == player2 && gameBoard[4][4] == player2) {
            return true;
        }
        // top to bottom win conditions for both ^
        else if (gameBoard[0][0] == player1 && gameBoard[2][2] == player1 && gameBoard[4][4] == player1) {
            return true;
        } else if (gameBoard[0][0] == player2 && gameBoard[2][2] == player2 && gameBoard[4][4] == player2) {
            return true;
        } else if (gameBoard[0][4] == player1 && gameBoard[2][2] == player1 && gameBoard[4][0] == player1) {
            return true;
        } else if (gameBoard[0][4] == player2 && gameBoard[2][2] == player2 && gameBoard[4][0] == player2) {
            return true;
        } else
            return false;

        // diagonal win conditions for both ^
    }

}