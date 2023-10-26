// Zur Blatt 02 Aufgabe 03

#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Druckt einen Text aus
void drucke_text(const string& text);
void drucke_ganzzahl(int ganzzahl);
void drucke_kommazahl(double gleitkommazahl);
string lies_wort();
int lies_ganzzahl();
double lies_gleitkommazahl();
void ablauf_diagram_1();
void ablauf_diagram_2();

int main() {
  ablauf_diagram_1();
  ablauf_diagram_2();

}

void drucke_text(const string& text) {
  cout << text << endl;
}

void drucke_ganzzahl(int ganzzahl) {
  cout << to_string(ganzzahl) << endl;
}

void drucke_kommazahl(double gleitkommazahl) {
  cout << to_string(gleitkommazahl) << endl;
}

string lies_wort() {
  string wort;
  cin >> wort;
  return wort;
}

int lies_ganzzahl() {
  string wort;
  cin >> wort;
  int ganzzahl = 0;
  try {
    ganzzahl = stoi(wort);
  } catch (const invalid_argument& e) {
    ganzzahl = -1000;
  }
  return ganzzahl;
}

double lies_gleitkommazahl() {
  string wort;
  cin >> wort;
  double lies_gleitkommazahl = 0.0;
  try {
    lies_gleitkommazahl = stod(wort);
  } catch (const invalid_argument& e) {
    lies_gleitkommazahl = NAN; // See https://en.cppreference.com/w/cpp/numeric/math/NAN
  }
  return lies_gleitkommazahl;
}
void ablauf_diagram_1(){
  double x = lies_gleitkommazahl();
  x = x*x;
  cout<<x<<endl;
}

void ablauf_diagram_2(){
  double x = lies_gleitkommazahl();
  while (true){
    if(x<0){cout<<"Bitte gib eine Zahl groesser als 0!";
    x = lies_gleitkommazahl();
    }
  else break;
  }
  while (true)
  {if(x<=1){
    cout<<"x: "<<x<<endl;
    break;
  }
  else{
    x = x-2;
  }
  }
}