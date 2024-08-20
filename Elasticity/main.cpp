#include <iostream>
#include <cmath>

double X(double z, const double M, const double E, const double J) {
	return M / (2 * E * J) * z * z;
}


double sigma(double x, const double M, const double J) {
	return -M / J * x;
}


int main() {
	const double M = 10000.0;
	const double E = 2.0 * std::pow(10, 11);
	const double J = 0.00016094;

	std::cout << "Sigma(0.1) = " << sigma(0.1, M, J) << std::endl;

	std::cout << std::endl;

	std::cout << "x(0) = " << X(0.0, M, E, J) << std::endl;
	std::cout << "x(0.5) = " << X(0.5, M, E, J) << std::endl;
	std::cout << "x(1) = " << X(1.0, M, E, J) << std::endl;

	return 0;
}