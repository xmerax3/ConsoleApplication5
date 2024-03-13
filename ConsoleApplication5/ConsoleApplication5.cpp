#include <iostream> 
using namespace std;

void Rectangle(double height, double width, double* square, double* perimeter)
{
    *square = width * height;
    *perimeter = 2 * (width + height);
}

int main()
{
    double square = 0;
    double perimeter = 0;
    double width;
    cout << "Input width: ";
    cin >> width;
    double height;
    cout << "Input height: ";
    cin >> height;
    Rectangle(width, height, &square, &perimeter);
    cout << "Square: " << square << ", Perimeter: " << perimeter << "\n";

    return 0; 
