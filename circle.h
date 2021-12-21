#include <cmath>
using namespace std;

class Circle{
	const double pi = 3.141592953589793238462643383279;
	double radius;
	
	public:
		Circle(double rad){
			radius = rad;
		};
		double circumference(){	
			return 2*pi*radius;
		};
		double area(){
			return pi*pow(radius,2);
		};
};
