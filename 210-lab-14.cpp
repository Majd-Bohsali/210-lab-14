// COMSC210 | Lab 14 | Majd Bohsali
// IDE used: Visual Studi Code

#include <iostream>
#include <vector>
using namespace std;

const int W10 = 10, SIZE = 5;

class Color {
private:
    int redVal; 
    int greenVal;
    int blueVal;
public: 
    int getRedVal()              { return redVal; }
    void setRedVal(int r)        {redVal = r; }
    int getGreenVal()            { return greenVal; }
    void setGreenVal(int g)      {greenVal = g; }
    int getBlueVal()             { return blueVal; }
    void setBlueVal(int b)       {blueVal = b; }

    void print() { 
        cout << "Color Code: " << "R = " << redVal << " ,G = " << greenVal << " ,B = " << blueVal << endl; 
    }
};

int main() { 
    return 0;
}