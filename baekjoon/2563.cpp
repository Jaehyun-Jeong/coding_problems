#include <iostream>
int main(void){
    short numPapers, grid[100][100]{}, area = 0;
    std::cin >> numPapers;
    
    for(int i = 0; i < numPapers; i++){
        short hori, vert;
        std::cin >> hori >> vert;
        for(int j = hori; j < hori+10; j++){
            for(int k = vert; k < vert+10; k++){
                if(!grid[j][k]){
                    grid[j][k] = 1;
                    area++;
                }
            }
        }
    }

    std::cout << area;
}
