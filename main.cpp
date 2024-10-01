#include <iostream>
using namespace std;

class MyCar
{
protected:
	double horsepower;
	string type;
	string color;
public:
	MyCar(double hp, string t, string c) : horsepower(hp), type(t), color(c) {}
	virtual void display() = 0;

};
class Engine
{
protected:
	double horsepower;
	string type;
public:
	Engine(double hp, string t) : horsepower(hp), type(t) {}
	virtual void display() = 0;

};
int main() {
	
	return 0;
}	