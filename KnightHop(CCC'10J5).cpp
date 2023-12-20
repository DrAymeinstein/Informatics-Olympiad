// https://dmoj.ca/problem/ccc10j5

#include <iostream>
#include <queue>
#include <vector>

#define STAT(x) static_cast<vector<int, allocator<int>>::size_type>(x)

using namespace std;

class KnightChessboard {
private:
    static const int board_size = 8;
    vector<vector<int>> board;
    vector<pair<int, int>> moves = { {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1} };

public:
    KnightChessboard() : board(board_size, vector<int>(board_size, -1)) {}

    int minNumMoves(pair<int, int> start, pair<int, int> target) {
        queue<pair<int, int>> q;
        q.push(start);
        board[STAT(start.first - 1)][STAT(start.second - 1)] = 0;

        while (!q.empty()) {
            auto &current = q.front();
            q.pop();

            for (auto& move : moves) {
                int new_row = current.first + move.first;
                int new_col = current.second + move.second;

                if (KnightChessboard::isValid(new_row, new_col) && board[STAT(new_row - 1)][STAT(new_col - 1)] == -1) {
                    board[STAT(new_row - 1)][STAT(new_col - 1)] = board[STAT(current.first - 1)][STAT(current.second - 1)] + 1;
                    q.push({ new_row, new_col });

                    if (make_pair(new_row, new_col) == target) {
                        return board[STAT(new_row - 1)][STAT(new_col - 1)];
                    }
                }
            }
        }

        return 0;
    }

    bool isValid(int row, int col) const {
        return row >= 1 && row <= board_size && col >= 1 && col <= board_size;
    }
};

int main() { 
    int start_row, start_col, target_row, target_col;
    cin >> start_row >> start_col;

    cin >> target_row >> target_col;

    KnightChessboard chessboard;
    int result = chessboard.minNumMoves({ start_row, start_col }, { target_row, target_col });

    cout << result << endl;

    return 0;
}
