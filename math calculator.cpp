// math calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float pi = 3.14;
void choseOperation(){
  cout <<"what operation do you want to do?   (type -d for version details)\n";
  cout << "do you want to calculate a shape? (y/n)\n";
  string anwser;
  cin >> anwser;
  if (anwser == "y"){
    cout << "shapes you can calculate: 2D = Circle Rectangle(comingsoon) Triangle(comingsoon)\n";
  }

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

}
int main()
{
    cout << "welcome to math calculator            version 0.0.1\n";
    calCircle();
    system("pause");
}
