// LINE USING BRESENHAM

/* Assumptions :
1) Line is drawn from left to right.
2) x1 < x2 and y1 < y2
3) Slope of the line is between 0 and 1.
We draw a line from lower left to upper
right.
*/

#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

// function for line generation
void bresenham(int x1, int y1, int x2, int y2){
    int m_new = 2 * (y2 - y1);
    int slope_error_new = m_new - (x2 - x1);
    
    for (int x = x1, y = y1; x <= x2; x++){
        putpixel(x, y, WHITE);
        cout << x << " " << y << endl;
        slope_error_new += m_new;
        if (slope_error_new >= 0){
            y++;
            slope_error_new -= 2 * (x2 - x1);
        }
        delay(10);
    }
}


int main(){
    initwindow(500, 500);
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the points: ";
    cin >> x1 >> y1 >> x2 >> y2;

    bresenham(x1, y1, x2, y2);
    delay(100);
    getch();
    closegraph();
    return 0;
}
