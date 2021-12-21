#include <iostream>
#include <eigen3/Eigen/Dense> //because eigen package is located in the usr/local/include/eigen3/ directory

using namespace std;
using namespace Eigen;

int main (){
	MatrixXd m (2,2);
	m(0,0) = 0;
	m(0,1) = 1;
	m(1,0) = 0.5;
	m(1,1) = 1.5;
	cout<<m<<endl;
	return 0;
};
