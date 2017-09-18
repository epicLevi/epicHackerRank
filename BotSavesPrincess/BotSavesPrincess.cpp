#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x;
    int y;
};

void displayPathtoPrincess(int n, vector <string> grid){
    Point Princess, Bot;
    
    for (int y = 0; y < grid.size(); y++) {
        
        int x = 0;
        
        for(char& c : grid[y]) {
           if (c == 'p') {
               Princess.x = x;
               Princess.y = y;
           }
           
           x++;
        }
    }
    
    if (n % 2 == 0) {
        for (int y = 0; y < grid.size(); y++) {
            
            int x = 0;
            
            for(char& c : grid[y]) {
               
               if (c == 'm') {
                   Bot.x = x;
                   Bot.y = y;
               }
               
               x++;
            }
        }
    } else {
        Bot.x = Bot.y = n / 2;
    }
    
    Point Moves;
    Moves.x = Bot.x - Princess.x;
    Moves.y = Bot.y - Princess.y;
    
    while (Moves.x != 0 && Moves.y != 0) {
        if (Moves.y > 0) {
            cout << "UP\n";
            Moves.y--;
        }
        else if (Moves.y < 0){
            cout << "DOWN\n";
            Moves.y++;
        }
        
        if (Moves.x > 0) {
            cout << "LEFT\n";
            Moves.x--;
        }
        else if (Moves.x < 0){
            cout << "RIGHT\n";
            Moves.x++;
        }
    }
    
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m, grid);

    return 0;
}
