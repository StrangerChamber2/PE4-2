#include <iostream>

void createBoard(std::string board[3][3]){
    for(int o =0;o<3;o++){
        for(int i = 0;i<3;i++){
            board[o][i] = "  ";
        }
    }    
}

void displayBoard(std::string board[3][3]){
    for(int o =0;o<3;o++){
        for(int i = 0;i<3;i++){
            std::cout << board[o][i];
        }
        std::cout << std::endl;
    }
}

int main(){
    std::string board[3][3];
    createBoard(board);
    displayBoard(board);
}