#include <iostream>
#include <string>
using namespace std;

double circleArea(double r)
{
    double PI = 3.1459;
    double area_circle = PI * (r * r);
    return area_circle;
}

double rectArea(double width, double height)
{
    double area_rect = width * height;
    return area_rect;
}

int main()
{
    double val_width, val_height;
    double val_r;

    cout << "--------- rectArea --------" << endl;
    cout << "Input width (cm): ";
    cin >> val_width;
    cout << "Input height (cm): ";
    cin >> val_height;

    double Area_rect = rectArea(val_width, val_height);
    cout << "Area: " << Area_rect << " cm^2" << endl;

    cout << "------- circleArea -------" << endl;
    cout << "Input r (cm): ";
    cin >> val_r;

    double Area_circle = circleArea(val_r);
    cout << "Area: " << Area_circle << " cm^2" << endl;

    cout << "--------------------------" << endl;
}