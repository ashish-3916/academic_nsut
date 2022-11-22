// 1.1 LINE USING DDA

#include <iostream>
#include <graphics.h>
#include <cmath>
#include <time.h>
using namespace std;


//function to generate the line
void DDALine(int x0, int y0, int x1, int y1){
    int dx = x1 - x0;
    int dy = y1 - y0;

    int step = (abs(dx) > abs(dy))? abs(dx) : abs(dy);

    float x_step = (float)dx/step;
    float y_step = (float)dy/step;

    float x = x0;
    float y = y0;

    for(int i = 0; i < step; i++){
        putpixel(round(x), round(y), WHITE);
        cout << round(x) << " " << round(y) << endl;
        x += x_step;
        y += y_step;
        delay(10);
    }

}

//driver function
int main(){
    initwindow(500,500);
    int x0, y0, x1, y1;
    cout << "Enter the coordinates of the points: ";
    cin >> x0 >> y0 >> x1 >> y1;

    DDALine(x0, y0, x1, y1);
    
    delay(100);
    getch();
    delay(10000);
    closegraph();
    return 0;
}