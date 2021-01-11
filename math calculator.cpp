
#include <iostream>
using namespace std;
float pi = 3.14;

void invalidInput(){
  cout << "invalid input . please run the program again and type in a vaid input\a";
}
void perimeterRectangle(){
  cout << "Please enter the length: \n";
  double length;
  cin >> length;
  cout << "Please enter the width: \n";
  double width;
  cin >> width;
  cout << "Perimeter: "<< (length + width) * 2<< endl;
}
void areaRectangle(){
  cout << "Please enter the length: \n";
  double length;
  cin >> length;
  cout << "Please enter the width: \n";
  double width;
  cin >> width;
  cout << "Area: "<< length * width<< endl;
}
void perimeterCircle(){
  cout << "Please enter the radius: \n";
  double Radius;
  cin >> Radius;
  cout << "perimeter "<< Radius * 2 * pi <<endl;
}
void areaCircle(){
  cout << "Please enter the radius: \n";
  double Radius;
  cin >> Radius;
  cout << "area: "<< Radius * Radius * pi<<endl;

}
void calRectangle(){
  cout << "area or perimeter?\n";
  string anwser;
  cin >> anwser;
  if (anwser == "area"){
    areaRectangle();
  }
  if( anwser == "perimeter"){
    perimeterRectangle();
  }
  else{
    invalidInput();
  }
}
void calCircle(){
  cout << "area or perimeter?\n";
  string anwser;
  cin >> anwser;
  if (anwser == "area"){
    areaCircle();
  }
  if( anwser == "perimeter"){
    perimeterCircle();
  }
  else{
    invalidInput();
  }
}
void operationChosen(){
  string anwser;
  cin >> anwser;
  if (anwser == "c"){
    calCircle();
  }
  if (anwser == "t"){
    calRectangle();
  }
  else{
    invalidInput();
  }
}
void choseOperation() {
    cout << "what operation do you want to do?   (type -d for version details)\n";
    cout << "do you want to calculate a shape? (y/n)\n";
    string anwser;
    cin >> anwser;
    if (anwser == "y") {
        cout << "shapes you can calculate: 2D = c for circle t for  Triangle(comingsoon)\n";
        operationChosen();
      }
      else{
        invalidInput();
      }

}
void startApp(){
  cout << "welcome to math calculator            version 0.0.1\n";
  choseOperation();
}

int main()
{
    startApp();
    system("pause");
}
