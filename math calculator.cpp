
#include <iostream>
using namespace std;
//version 0.1.0
float pi = 3.14;

void invalidInput() {
	cout << "operation ended ";
}

void perimeterRectangle() {
	cout << "Please enter the length: \n";
	double length;
	cin >> length;
	cout << "Please enter the width: \n";
	double width;
	cin >> width;
	cout << "Perimeter: " << (length + width) * 2 << endl;
}
void areaRectangle() {
	cout << "Please enter the length: \n";
	double length;
	cin >> length;
	cout << "Please enter the width: \n";
	double width;
	cin >> width;
	cout << "Area: " << length * width << endl;
}
void perimeterTriangle() {
	cout << "Please enter the two sides and the base of the triangle: \n";
	double side1, side2, base;
	cin >> side1;
	cin >> side2;
	cin >> base;
	cout << "perimeter: " << side1 + side2 + base << endl;
}
void sizeConverter(){
	cout << "Please enter the value: ";
	double int1{};
	string unit1;
	string unit2;
	cin >> int1;
	cout << "Please enter the unit cm , mm , m : ";
	cin >> unit1;
	cout << "Please enter the unit you want to convert to : cm , mm , m : ";
	cin >> unit2;
	if (unit1 == "mm"){
		if (unit2 == "cm"){
			cout << int1 / 10 << '\n';
		}
		if (unit2 == "m"){
			cout << int1 / 1000 << '\n';
		}
	}
	if (unit1 == "m"){
		if (unit2 == "mm"){
			cout << int1 * 1000 << endl;
		}
		if (unit2 == "cm"){
			cout << int1 * 100 << endl;
		}
	}
	if (unit1 == "cm"){
		if (unit2 == "m"){
			cout << int1 / 100 << endl;
		}
		if (unit2 == "mm"){
			cout << int1 * 10 << endl;
		}
	}
}
void areaTriangle() {
	cout << "Please enter the altitude: \n";
	double altitude;
	cin >> altitude;
	cout << "Please enter the base: \n";
	double base;
	cin >> base;
	cout << (base * altitude) / 2 << endl;

}
void perimeterCircle() {
	cout << "Please enter the radius: \n";
	double Radius;
	cin >> Radius;
	cout << "perimeter " << Radius * 2 * pi << endl;
}
void areaCircle() {
	cout << "Please enter the radius: \n";
	double Radius;
	cin >> Radius;
	cout << "area: " << Radius * Radius * pi << endl;

}
void numConverter() {
	cout << "what do you want to convert ? ( (s)size, (others will come later)\n";
	string anwser;
	cin >> anwser;
	if (anwser == "s"){
		sizeConverter();
	}
}
void numberCalc() {
	cout << "enter an operation:        (like 2*2)\n";
	double num1;
	string operation;
	double num2;
	cin >> num1 >> operation >> num2;
	if (operation == "/"){
		cout << num1 / num2 << endl;
	}
	if (operation == "*") {
		cout << num1 * num2 << endl;
	}
	if (operation == "+") {
		cout << num1 + num2 << endl;
	}
	if (operation == "-") {
		cout << num1 - num2 << endl;
	}
	else {
		invalidInput();
	}
}
void calRectangle() {
	cout << "||||||||||||||||||||||||\n";
	cout << "||                    ||\n";
	cout << "||                    ||\n";
	cout << "||                    ||\n";
	cout << "||||||||||||||||||||||||\n";
	cout << "area or perimeter?\n";
	string anwser;
	cin >> anwser;
	if (anwser == "area") {
		areaRectangle();
	}
	if (anwser == "perimeter") {
		perimeterRectangle();
	}
	else {
		invalidInput();
	}
}
void calCircle() {
	cout << "   ||||||||||| " << endl;
	cout << "  |||       |||\n";
	cout << " |||         |||\n";
	cout << " |||         |||\n";
	cout << "  |||       |||\n";
	cout << "   |||||||||||\n";
	cout << "area or perimeter?\n";
	string anwser;
	cin >> anwser;
	if (anwser == "area") {
		areaCircle();
	}
	if (anwser == "perimeter") {
		perimeterCircle();
	}
	else {
		invalidInput();
	}
}
void calTriangle() {
	cout << "      *      \n";
	cout << "   ******* \n";
	cout << " *********** \n";
	cout << "************* \n";
	cout << "area or perimeter?\n";
	string anwser;
	cin >> anwser;
	if (anwser == "area") {
		areaTriangle();
	}
	if (anwser == "perimeter") {
		perimeterTriangle();

	}
}
void shapeCalc() {
	cout << "shapes you can calculate: 2D = c for circle r for  Rectangle t for Triangle\n";
	string anwser;
	cin >> anwser;
	if (anwser == "c") {
		calCircle();
	}
	if (anwser == "r") {
		calRectangle();
	}
	if (anwser == "t"){
		calTriangle();
	}
	else {
		invalidInput();
	}
}

void choseOperation() {
	cout << "what operation do you want to do? s : shape calculation -- n : number calculation\n  -- u unit conversion (type -d for version details)\n";
	string typ;
	cin >> typ;
	if (typ == "u"){
		numConverter();
	}
	if (typ == "s") {
		shapeCalc();
	}
	if (typ == "n") {
		numberCalc();
	}
	else {
		invalidInput();
	}
}
void startApp() {
	cout << "welcome to math calculator            version 0.0.1\n";
	choseOperation();
}

int main()
{
	startApp();
	system("pause");
	return 0;
}
