#include <iostream>

using namespace std;

class Rectangle
{
public:
    int weight, height;
    virtual void display() const
    {
        cout << weight << " " << height;
    }
};

class RectangleArea : public Rectangle
{
public:
    int area;
    void read_input()
    {
        cin >> weight;
        cin >> height;
    }
    void display() const
    {
        cout << "\n" << weight * height;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
