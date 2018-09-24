#include <bits/stdc++.h>

using namespace std;

int answer[1000000] = {0};
int answerIndexMap[1000][1000] = {0};
int answerIndex = 1;
int paintingViewed = 0;

void check_tile(string symbol[], int row, int col, int x, int y)
{
    answerIndexMap[y][x] = answerIndex;
    if(y-1>=0) {
        if(symbol[y-1][x] == '.' && answerIndexMap[y-1][x] == 0) {
            check_tile(symbol, row, col, x, y-1);
        } else if(symbol[y-1][x] == '*') {
            paintingViewed++;
        }
    }

    if(y+1<row) {
        if(symbol[y+1][x] == '.' && answerIndexMap[y+1][x] == 0) {
            check_tile(symbol, row, col, x, y+1);
        } else if(symbol[y+1][x] == '*') {
            paintingViewed++;
        }
    }

    if(x-1>=0) {
        if(symbol[y][x-1] == '.' && answerIndexMap[y][x-1] == 0) {
            check_tile(symbol, row, col, x-1, y);
        } else if(symbol[y][x-1] == '*') {
            paintingViewed++;
        }
    }

    if(x+1<col) {
        if(symbol[y][x+1] == '.' && answerIndexMap[y][x+1] == 0) {
            check_tile(symbol, row, col, x+1, y);
        } else if(symbol[y][x+1] == '*') {
            paintingViewed++;
        }
    }
    return;
}

int main()
{
    int row, col, n; cin >> row >> col >> n;
    int x, y;
    string symbol[row];
    for(int i=0; i<row; i++) {
        cin>>symbol[i];
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(symbol[i][j] == '.' && answerIndexMap[i][j] == 0) {
                answerIndex++;
                paintingViewed = 0;
                check_tile(symbol, row, col, j, i);
                answer[answerIndex] = paintingViewed;
            }
        }
    }
    for(int i=0; i<n; i++) {
        cin >> y >> x;
        cout << answer[answerIndexMap[--y][--x]] << endl;
    }

    return 0;
}
