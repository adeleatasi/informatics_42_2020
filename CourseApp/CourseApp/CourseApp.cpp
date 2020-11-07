// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

double calc(double a, double b, double x)
{
	double numerator = log(pow(b, 2)) / log(a);
	double denominator = pow(abs(pow(x, 2) - pow(a, 2)), 1 / 3.0);
	double y = numerator / denominator;
	return y;
}

void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, b, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void taskB(double a, double b, double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		//printf;
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}

int main()
{  
    const double a=2.0;
    const double b=4.1;
	const double dx = 0.1;
	const double xn = 0;
	const double xk = 10;

	taskA(a, b, xn, xk, dx);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
