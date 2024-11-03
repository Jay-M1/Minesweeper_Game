#include <iostream>
#include <string>

void PrintBanner();
void Determine_difficulty();

int main (int argc, char* argv[]) {
    PrintBanner();
    Determine_difficulty();

    return 0;
}/*put this into terminal to run code:
cd /workspaces/CPP/Minesweeper
rm -rf ./build
cmake --preset default
cmake --build ./build
./build/Minesweeper
*/

void PrintBanner() {
    std::cout << R"(88b           d88  88                                                                                                                      
888b         d888  ""                                                                                                                      
88`8b       d8'88                                                                                                                          
88 `8b     d8' 88  88  8b,dPPYba,    ,adPPYba,  ,adPPYba,  8b      db      d8   ,adPPYba,   ,adPPYba,  8b,dPPYba,    ,adPPYba,  8b,dPPYba, 
88  `8b   d8'  88  88  88P'   `"8a  a8P_____88  I8[    ""  `8b    d88b    d8'  a8P_____88  a8P_____88  88P'    "8a  a8P_____88  88P'   "Y8 
88   `8b d8'   88  88  88       88  8PP"""""""   `"Y8ba,    `8b  d8'`8b  d8'   8PP"""""""  8PP"""""""  88       d8  8PP"""""""  88         
88    `888'    88  88  88       88  "8b,   ,aa  aa    ]8I    `8bd8'  `8bd8'    "8b,   ,aa  "8b,   ,aa  88b,   ,a8"  "8b,   ,aa  88         
88     `8'     88  88  88       88   `"Ybbd8"'  `"YbbdP"'      YP      YP       `"Ybbd8"'   `"Ybbd8"'  88`YbbdP"'    `"Ybbd8"'  88         
                                                                                                       88                                  
                                                                                                       88                                  )" << std::endl;
}

void Determine_difficulty() {
    std::string difficulty;
    std::cout << "Please select a difficulty: \nBeginner, Advanced or Professional?" << std::endl;
    std::cin >> difficulty;

    if (difficulty == "Beginner") {
        std::cout << "Beginner: Spielfeld von 8 mal 8 (64) Feldern mit 10 Minen (Minendichte 15,6 %)." << std::endl;
    }
    else if (difficulty == "Advanced") {
        std::cout << "Advanced: Spielfeld von 16 mal 16 (256) Feldern mit 40 Minen (15,6 %)." << std::endl;
    }
    else if (difficulty == "Professional") {
        std::cout << "Professional: Spielfeld von 30 mal 16 (480) Feldern mit 99 Minen (20,6 %)." << std::endl;
    }
    else {
        std::cout << "\nInvalid input. Try again." << std::endl;
        Determine_difficulty();
    }
}
