
#include <iostream>
using namespace std;
float pi = 3.14;

void invalidInput() {
	cout << ""<<endl;
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
void numberCalc(){
	cout << "enter an operation:        (like 2*2)\n";
	double num1;
	cin >> num1;
	string operation;
	cin >> operation;
	double num2;
	cin >> num2;
	if (operation == "*"){
		cout << num1 * num2<<endl;
	}
	if (operation == "+"){
		cout << num1 + num2<<endl;
	}
	if (operation == "-"){
		cout << num1 - num2<<endl;
	}
	else{
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
	cout << "     |||||||\n";
	cout << "   ||       ||\n";
	cout << "  ||         ||\n";
	cout << "  ||         ||\n";
	cout << "   ||       ||\n";
	cout << "     |||||||\n";
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
void operationChosen() {
	string anwser;
	cin >> anwser;
	if (anwser == "c") {
		calCircle();
	}
	if (anwser == "r") {
		calRectangle();
	}
	else {
		invalidInput();
	}
}
void shapeCalc() {
	cout << "do you want to calculate a shape? (y/n)\n";
	string anwser;
	cin >> anwser;
	if (anwser == "y") {
		cout << "shapes you can calculate: 2D = c for circle r for  Rectangle\n";
		operationChosen();
	}
	if(anwser != "y" , "n") {
		invalidInput();
	}
}
void choseOperation() {
	cout << "what operation do you want to do? s : shape calculation -- n : number calculation     (type -d for version details)\n";
	string typ;
	cin >> typ;
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
}
