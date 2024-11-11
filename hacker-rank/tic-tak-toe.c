#include <stdio.h>

#define SIZE 3


void initializeBoard(char board[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}
void printBoard(char board[SIZE][SIZE]){
     for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
           printf("%c",  board[i][j]);
        }
    }
}

int isBoardFull(char board[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}
void getPlayerMove(char board[SIZE][SIZE], char player){
    int row, col;
    while (1) {
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            board[row][col] = player;
            break;
        } else {
            printf("This move is not valid\n");
        }
    }
}

int isGameOver(char arr[SIZE][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        // check Row
        if (arr[i][0] != ' ' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
        {
            return 1;
        }
        // check cols
        if (arr[0][i] != ' ' && arr[0][i] == arr[1][i] && arr[i][0] == arr[2][i])
        {
            return 1;
        }
        // Check Dig
        if ((arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] ))
        {
            return 1;
        }
        if (arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] )
        {
           return 1;
        }
        
        return 0;
    }
}
int main()
{
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int winner = 0;
    
    initializeBoard(board);
    
    while (!winner && !isBoardFull(board)) {
        printBoard(board);
        getPlayerMove(board, currentPlayer);
        winner = isGameOver(board);
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    
    printBoard(board);
    
    if (winner) {
        printf("Player %c wins!\n", (currentPlayer == 'X') ? 'O' : 'X');
    } else {
        printf("It's a draw!\n");
    }
    
}