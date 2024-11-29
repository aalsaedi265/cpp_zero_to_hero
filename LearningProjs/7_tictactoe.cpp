#include <iostream>
#include <ctime>
#include <array>

class TicTacToe
{
private:
    std::array<char, 9> board;
    const char PLAYER = 'X';
    const char COMPUTER = 'O';
    const char EMPTY = ' ';
    bool isRunning;

    void drawBoard() const
    {
        std::cout << "\n     |     |     \n"
                  << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n"
                  << "_____|_____|_____\n"
                  << "     |     |     \n"
                  << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n"
                  << "_____|_____|_____\n"
                  << "     |     |     \n"
                  << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n"
                  << "     |     |     \n\n";
    }

    bool isValidMove(int position) const
    {
        return position >= 0 && position < 9 && board[position] == EMPTY;
    }

    void playerMove()
    {
        int position;
        do
        {
            std::cout << "Enter a spot to place a marker (1-9): ";
            std::cin >> position;
            position--; // Convert to 0-based index
    //keep asking for a valid move
        } while (!isValidMove(position));

        board[position] = PLAYER;
    }

    void computerMove()
    {
        int position;
        do
        {
            position = rand() % 9;
        } while (!isValidMove(position));

        board[position] = COMPUTER;
    }

    bool checkWin(char player) const
    {
        const int winPatterns[8][3] = {
            {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
            {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
            {0, 4, 8}, {2, 4, 6} // Diagonals
        };
        // auto  automatically deduces the type of pattern(arr of 3 ints)
        // & refers to the address preventing copying on each iteration
        for (const auto &pattern : winPatterns)
        { // Loops through each winning pattern array
            if (board[pattern[0]] != EMPTY &&
                board[pattern[0]] == board[pattern[1]] &&
                board[pattern[1]] == board[pattern[2]])
            {
                std::cout << (board[pattern[0]] == PLAYER ? "YOU WIN!\n" : "YOU LOSE!\n");
                return true;
            }
        }
        return false;
    }

    bool checkTie() const
    {
        for (char space : board)
        {
            if (space == EMPTY)
                return false;
        }
        std::cout << "IT'S A TIE!\n";
        return true;
    }

public:
    TicTacToe() : board{}, isRunning(true)
    {
        std::fill(board.begin(), board.end(), EMPTY);
        srand(time(0));
    }

    void play()
    {
        while (isRunning)
        {
            drawBoard();
            playerMove();

            if (checkWin(PLAYER) || checkTie())
            {
                drawBoard();
                break;
            }

            computerMove();
            if (checkWin(COMPUTER) || checkTie())
            {
                drawBoard();
                break;
            }
        }
        std::cout << "Thanks for playing!\n";
    }
};

int main()
{
    TicTacToe game;
    game.play();
    return 0;
}