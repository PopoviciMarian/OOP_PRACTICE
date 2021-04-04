
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    Rectangle r1 = { 10, 10, 20, 20 };
    Rectangle r2 = { 15, 50, 25, 15 };
    
    cout << "R1 = ";
    for (auto p : r1.p)
        cout << "Punct(" << p.x << ", " << p.y << ") ";
    cout << endl;
    
    for (auto p : r2.p)
        cout << "Punct(" << p.x << ", " << p.y << ") ";
    cout << endl;
   
    cout << "R1 e patrat: " << boolalpha << (bool)r1 << endl;
    cout << "R2 e patrat: " << boolalpha << (bool)r2 << endl;
    
    Rectangle r3 = r1 & r2;
    cout << "Dreptunghiul minim care include pe r1 si r2 este ";
    cout << "x = " << r3.GetTopLeftPoint().x;
    cout << "y = " << r3.GetTopLeftPoint().y;
    
    cout << " lungimea=" << r3.Width();
    cout << " latimea=" << r3.Height() << endl;
    return 0;
    
}
