#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
protected:
	double r;
public:
	Circle(double r) : r(r) {}

	double GetRadius() const
	{
		return r;
	}
	double GetArea() const
	{
		return 3.14159 * r * r;
	}
	void display() const
	{
		cout << "Circle: r = " << r << endl;
	}
};
class Square
{
protected:
	double a;

public:
	Square(double a) : a(a) {}
	double GetSide() const
	{
		return a;
	}
	double GetArea() const
	{
		return a * a;
	}
	void display() const
	{
		cout << "Square: a = " << a << endl;
	};
};
class InscribedSquare : public Square
{
public:
	InscribedSquare(double r) : Square(2 * r / sqrt(2)) {}
	void display() const
	{
		cout << "InscribedSquare: a = " << a << endl;
	}
};
int main() {
	double side;
	cout << "Enter the side of the square: ";
	cin >> side;

	InscribedSquare inscribedSquare(side);
	inscribedSquare.display();

	return 0;
}