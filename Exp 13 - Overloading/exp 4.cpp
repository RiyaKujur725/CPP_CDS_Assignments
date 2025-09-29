#include <iostream>
using namespace std;

class Box
{
public:
    int length, width, height;

    Box(int l = 0, int w = 0, int h = 0)
    {
        length = l;
        width = w;
        height = h;
    }

    bool operator*(const Box &b)
    {
        int vol1 = length * width * height;
        int vol2 = b.length * b.width * b.height;
        return vol1 > vol2;
    }

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box b1(2, 3, 4);
    Box b2(3, 3, 3);

    cout << "Box1 Volume = " << b1.volume() << endl;
    cout << "Box2 Volume = " << b2.volume() << endl;

    if (b1 * b2)
        cout << "Box1 is bigger" << endl;
    else
        cout << "Box2 is bigger" << endl;

    return 0;
}

/*==========OUTPUTS==========
Box1 Volume = 24
Box2 Volume = 27
Box2 is bigger
*/
