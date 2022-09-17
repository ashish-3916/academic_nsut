// LINE USING MPT

#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;


// midPoint function for line generation
void midPoint(int x1, int y1, int x2, int y2){
	
	int dx = x2 - x1;
	int dy = y2 - y1;

	if(dy<=dx){
		int d = dy - (dx/2);
		int x = x1, y = y1;

		putpixel(x, y, WHITE);
		cout << x << " " << y << endl;

		while (x < x2){
			x++;
			if (d < 0)
				d = d + dy;
			else{
				d += (dy - dx);
				y++;
			}

			putpixel(x, y, WHITE);
			cout << x << " " << y << endl;
		}
	}
	else if(dx<dy){
		int d = dx - (dy/2);
		int x = x1, y = y1;

		putpixel(x, y, WHITE);
		cout << x << " " << y << endl;

		while (y < y2){
			y++;
			if (d < 0)
				d = d + dx;
			else{
				d += (dx - dy);
				x++;
			}
			putpixel(x, y, WHITE);
			cout << x << "," << y << "\n";
		}
	}
}

// Driver program
int main()
{	
	initwindow(500,500);
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the points: ";
    cin >> x1 >> y1 >> x2 >> y2;

    midPoint(x1, y1, x2, y2);
    
    delay(100);
    getch();
    closegraph();
	return 0;
}
