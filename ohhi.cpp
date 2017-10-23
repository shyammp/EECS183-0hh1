/**
 * ohhi.cpp
 *
 * EECS 183
 * Project 3: 0h h1
 * Fall 2017
 *
 * Shyam Patel
 * Srivatsav Gotur
 * shyammp
 * sgotur
 *
 * Creating the game 0h h1
 */

#include <iostream>
#include <cctype>
#include "utility.h"
#include "ohhi.h"

///////////////////////////////////////
// UTILITY FUNCTIONS //////////////////
///////////////////////////////////////

int count_unknown_squares(const int board[MAX_SIZE][MAX_SIZE], int size) {
    int numUnkownSquares = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(board[i][j] == UNKNOWN){
                numUnkownSquares++;
            }
        }
    }
    return numUnkownSquares;
}


///////////////////////////////////////
// VALIDITY CHECKS ////////////////////
///////////////////////////////////////

bool row_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int row,
                                int color) {
    for(int j = 0; j < size; j++){
        if((board[row][j] == color) && (board[row][j + 1] == color)
           && (board[row][j + 2] == color)){
            return false;
        }
        
    }
    return true;
}


bool col_has_no_threes_of_color(const int board[MAX_SIZE][MAX_SIZE],
                                int size,
                                int col,
                                int color) {
    for(int i = 0; i < size; i++){
        if((board[i][col] == color) && (board[i + 1][col] == color)
           && (board[i + 2][col] == color)){
            return false;
        }
    }
    return true;
}

bool board_has_no_threes(const int board[MAX_SIZE][MAX_SIZE], int size) {
    for(int k = 0; k < size; k++){
        if((!row_has_no_threes_of_color(board, size, k, RED))
           || (!row_has_no_threes_of_color(board, size, k, BLUE))){
            return false;
        }
        if((!col_has_no_threes_of_color(board, size, k, RED))
           || (!col_has_no_threes_of_color(board, size, k, BLUE))){
            return false;
        }
    }
    
    return true;
}

bool rows_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int row1,
                        int row2) {
    int numRepeats = 0;
    for(int j = 0; j < size; j++){
        if((board[row1][j] == UNKNOWN) || (board[row2][j] == UNKNOWN)){
            return true;
        }
        else if((board[row1][j] == board[row2][j])){
            numRepeats++;
        }
    }
        if(numRepeats == size){
            return false;
        }
        else{
            return true;
        }
    return true;
}


bool cols_are_different(const int board[MAX_SIZE][MAX_SIZE],
                        int size,
                        int col1,
                        int col2) {
    int numRepeats = 0;
    for(int i = 0; i < size; i++){
        if((board[i][col1] == UNKNOWN) || (board[i][col2] == UNKNOWN)){
            return true;
        }
        else if((board[i][col1] == board[i][col2])){
            numRepeats++;
        }
    }
        if(numRepeats == size){
        return false;
        }
        else{
            return true;
        }
    return true;
}

bool board_has_no_duplicates(const int board[MAX_SIZE][MAX_SIZE], int size) {
    for(int a = 0; a < size; a++){
        for(int b = a + 1; b < size; b++){
            if((!rows_are_different(board, size, a, b))
               || (!cols_are_different(board, size, a, b))){
                return false;
            }
            
        }
    }
    return true;
}


///////////////////////////////////////
// SOLVING FUNCTIONS //////////////////
///////////////////////////////////////

void solve_three_in_a_row(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int row,
                          bool announce) {
    // your code here
}

void solve_three_in_a_column(int board[MAX_SIZE][MAX_SIZE],
                             int size,
                             int col,
                             bool announce) {
    // your code here
}


void solve_balance_row(int board[MAX_SIZE][MAX_SIZE],
                       int size,
                       int row,
                       bool announce) {
}

void solve_balance_column(int board[MAX_SIZE][MAX_SIZE],
                          int size,
                          int col,
                          bool announce) {
    // your code here
}


///////////////////////////////////////
// GAMEPLAY FUNCTIONS /////////////////
///////////////////////////////////////

bool board_is_solved(const int board[MAX_SIZE][MAX_SIZE], int size) {
    // your code here
    return false;
}

bool check_valid_input(int size, int row_input, char col_input,
                       char color_char, int &row, int &col) {
    // your code here
    return false;
}

bool check_valid_move(const int original_board[MAX_SIZE][MAX_SIZE],
                      const int current_board[MAX_SIZE][MAX_SIZE],
                      int size, int row, int col, int color) {
    // your code here
    return false;
}


///////////////////////////////////////
// S'MORE FUNCTIONS ///////////////////
///////////////////////////////////////


void solve_lookahead_row(int board[MAX_SIZE][MAX_SIZE],
                         int size,
                         int row,
                         bool announce) {
    // your code here
}

void solve_lookahead_column(int board[MAX_SIZE][MAX_SIZE],
                            int size,
                            int col,
                            bool announce) {
    // your code here
}
