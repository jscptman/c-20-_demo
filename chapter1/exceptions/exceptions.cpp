#include<stdexcept>

int main() {
	double divideNumbers(double numerator, double denominator) {
		if (denominator == 0) {
			throw invalid_argument { "Denominator cannot be 0." };
		}
		return numerator / denominator;
	}

	try { 
		cout << divideNumbers(2.5, 0.5) << endl; 
		cout << divideNumbers(2.3, 0) << endl; 
		cout << divideNumbers(4.5, 2.5) << endl; 
	} catch (const invalid_argument& exception) { 
		cout << format("Exception caught: {}", exception.what()) << endl; //每个exception都有一个what方法.
	}
	return 0;
}
