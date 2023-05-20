#pragma once
class Operation {
private:
	double valor1, valor2;
public:
	Operation() {}
	~Operation() {}
	void setValor1(double valor1) { this->valor1 = valor1; }
	void setValor2(double valor2){ this->valor2 = valor2; }
	double getValor1() { return this->valor1; }
	double getValor2(){ return this->valor2; }
	double suma(double a, double b) {
		return a + b;
	}
	double resta(double a, double b) {
		return a - b;
	}
	double multiplicacion(double a, double b) {
		return a * b;
	}
	double division(double a, double b) {
		return a / b;
	}
	double factorial(double x) {
		int f = 1;
		for (size_t i = x; i >= 1; i--){
			f *= i;
		}
		return f;
	}

};

