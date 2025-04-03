#include <iostream>
#include <string>
using namespace std;
/*
interface
*/
class IBicycle
{
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};

class SimpleBicycle : public IBicycle
{
public:
	void  TwistTheWheel() override
	{
		cout << "руль обычного" << endl;
	}
	void Ride() override{
		cout << "движение обычного" << endl;
	}
};


class SportBicycle : public IBicycle
{
public:
	void  TwistTheWheel() override
	{
		cout << "руль спортивного" << endl;
	}
	void Ride() override {
		cout << "педаль спортивного" << endl;
	}
};


class Human
{
public:
	void RideOn(IBicycle& bicycle)
	{
		cout << "Крутим руль " << endl;
		bicycle.TwistTheWheel();
		cout << "Поехали " << endl;
		bicycle.Ride();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	SimpleBicycle sb;
	SportBicycle sb1;
	Human h;
	h.RideOn(sb1);
	return 0;
}