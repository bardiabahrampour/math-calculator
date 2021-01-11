// math calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float pi = 3.14;
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
    cout << "Hello World!\n";
    calCircle();
    system("pause");
}
