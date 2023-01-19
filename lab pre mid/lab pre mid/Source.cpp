#include<iostream>
using namespace std;
class iphone13 {
protected:
	int weight;
	double camera;
	double display;
public:
	iphone13(){
		weight = 174;
		camera = 12;
		display = 6.1;
		cout << "default constructer values assigned of iphone13" << endl;
	}
	iphone13(int a, double b, double c) {
		weight = a;
		camera = b;
		display = c;
		cout << "parametrized constructer values assigned of iphone13" << endl;
	}
	~iphone13() {
		cout << "iphone 13 destructer" << endl;
	}
};
class iphone13pro :public iphone13 {
public:
	iphone13pro(){
		weight = 204;
		camera = 12;
		display = 6.1;
		cout << "default constructer values assigned in iphone13pro" << endl;
	}
	iphone13pro(int a, double b, double c) {
		weight = a;
		camera = b;
		display = c;
		cout << "parametrized constructer values assigned in iphone13pro" << endl;
	}
	~iphone13pro() {
		cout << "destructer called of iphone13pro" << endl;
	}
};
class iphone13promax :public iphone13pro {
public:
	iphone13promax() {
		weight = 240;
		camera = 12;
		display = 6.7;
		cout << "default constructer values assigned in iphone13promax" << endl;
	}
	iphone13promax(int a, double b, double c) {
		weight = a;
		camera = b;
		display = c;
		cout << "parametrized constructer iphone 13promax" << endl;
	}
};

int main() {
	
	iphone13 i13(174,12,6.1);
	
	iphone13pro i13p(204,12,6.1);

	iphone13promax i13pm(240,12,6.1);

	return 0;
}