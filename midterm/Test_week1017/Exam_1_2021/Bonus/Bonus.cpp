// #include <iostream>
// using namespace std;

// //5*5 미로를 만들고, 가운데 새개의 행에 3개의 x위치를 정한다.
// // 첫 줄발지를 S, 마지막 도착지를 D로 정한다.
// // Maze 클래스는 Grid 클래스를 멤버로 가진다.

// class Grid;


// class Grid{
//     bool bValid;
//     bool bStart;
//     bool bDest;
//     int x;
//     int y;
// public:
//     friend class Maze;
//     bool isValid()  { return bValid;   }
//     bool isStart()  { return bStart;   }
//     bool isDest()   { return bDest;    }
//     void setValid(bool val) { bValid = val; }
//     void setStart(bool val) { bStart = val; }
//     void SetDest(bool val)  { bDest = val;  }  
//     void setX(int val)  { x = val;  }
//     void setY(int val)  { y = val;  } 
//     int getx() { return x; }
//     int gety()  { return y;  }
// };



// class Maze{
// public:
//    Grid grid[5][5];
//     char maze[5][5];
//     //생성자 생성시, 각 인덱스를 'O'로 초기화
//     Maze()  {
//         for (int i = 0; i < 5; i++){
//             for (int j = 0; j < 5; j++){
//                 maze[i][j] = 'O';           
//             }
//         }
//         maze[0][0] = 'S';
//         grid[0][0].setValid(true);
//         maze[4][4] = 'D';
//         grid[4][4].SetDest(true);
//     }   
//     void showMaze() {
//         //미로 출력
//         //Grid 멤버 변수 getx, gety 사용해서 출력가능
//         for(int i = 0; i<5; i++)    {
//             for(int j = 0; j<5; j++)    {
//                 if(grid[i][j].isValid() == false && grid[i][j].isStart() == false && grid[i][j].isDest() == false) {
//                     cout << 'X' << ' ';
//                 }
//                 else
//                     cout << maze[i][j] << ' ';
//             }
//             cout << endl;
//         }

//     }
// };

// int nextInRange(int min, int max)   {
//     int n = rand() % (max - min + 1) + min;
//     return n;
// }

// int main()  {
//     srand(unsigned(time(0)));   // 랜덤하게 x위치를 정하도록 srand()를 사용한다.
//                                 //추가로 x의 위치는 가운데 세 개의 행에만 존재 해야한다. ->(5, 20) 사이
//     Maze maze;
//     int x1 = nextInRange(0, 4);
//     int x2 = nextInRange(0, 4);
//     int x3 = nextInRange(0, 4);

//     //X가 놓일 좌표는 false로 설정한다. 
//     maze.grid[1][x1].setValid(false);
//     maze.grid[2][x2].setValid(false);
//     maze.grid[3][x3].setValid(false);



//     maze.showMaze();


// }



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Grid;

class Grid {
    friend class Maze;
    bool bValid;
    bool bStart;
    bool bDest;
    int x;
    int y;

public:
    friend class Maze;
    bool isValid()  { return bValid;   }
    bool isStart()  { return bStart;   }
    bool isDest()   { return bDest;    }
    void setValid(bool val) { bValid = val; }
    void setStart(bool val) { bStart = val; }
    void SetDest(bool val)  { bDest = val;  }  
    void setX(int val)  { x = val;  }
    void setY(int val)  { y = val;  } 
    int getx() { return x; }
    int gety()  { return y;  }

};
int nextInRange(int min, int max)   {
    int n = rand() % (max - min + 1) + min;
    return n;
}
class Maze {
public:
    Grid grid[5][5];
    char maze[5][5];

    Maze() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                maze[i][j] = 'O';
                grid[i][j].setValid(true); // 모든 Grid 객체를 유효한 값으로 초기화
            }
        }
        maze[0][0] = 'S';
        maze[4][4] = 'D';
        grid[0][0].setStart(true);
        grid[4][4].SetDest(true);
    }

    void placeRandomX() {
        // 랜덤한 X의 위치 설정 (첫 행과 마지막 행 제외)
        for(int i = 1; i<4; i++)    {
            int y = nextInRange(0, 4);
            grid[i][y].setValid(false);
            grid[i][y].setValid(false);
            grid[i][y].setValid(false);
        }
       
    }

    void showMaze() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (!grid[i][j].isValid() && !grid[i][j].isStart() && !grid[i][j].isDest()) {
                    cout << 'X';
                } else {
                    cout << maze[i][j];
                }
            }
            cout << endl;
        }
    }
};

int main() {
    srand(static_cast<unsigned>(time(0)));

    Maze maze;

    // 랜덤한 위치에 X를 놓는 예시를 여러 번 반복
    maze.placeRandomX();


    maze.showMaze();

    return 0;
}
