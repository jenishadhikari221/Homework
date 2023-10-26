// Zur Blatt 02 Aufgabe 03

#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Druckt einen Text aus
void drucke_text();
void drucke_ganzzahl(int ganzzahl);
void drucke_kommazahl(double gleitkommazahl);
string lies_wort();
int lies_ganzzahl();
double lies_gleitkommazahl();
void ablauf_diagram_1();
void ablauf_diagram_2();
void blatt_1_aufgabe_3();
void listing_Programm_2();
void listing_Programm_3();
void listing_Programm_4();
void alter_von_alan_turing_erraten();
void aufgabe_05__02();


int main() {
                //   Übungsblatt 2- Aufgabe 3
                //                      -Aufgabe 2
 // ablauf_diagram_1();
 // ablauf_diagram_2();
                                    // -Aufgabe3

  //blatt_1_aufgabe_3();

  //  listing_Programm_2();

  // listing_Programm_3();
  //  listing_Programm_4();
  // alter_von_alan_turing_erraten();
  // aufgabe_05__02();
  drucke_text();

}

void drucke_text() {
    int x;
    cout<<"Gib ein Zahl zwischen 0 und 4: ";cin>>x;
    switch (x)
    {
    case 0: 
        cout<<"Null";
        break;
    case 1: 
        cout<<"Eins";
        break;
    case 2: 
        cout<<"Zwei";
        break;
    case 3: 
        cout<<"Drei";
        break;
    case 4: 
        cout<<"Vier";
        break;

    default:
        cout<<"Die Eingabe muss zwischen 0 und 4 liegen!";
        break;
    }
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
  cout<<"Gib eine Zahl: "; cin >> wort;
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
    if(x<0){cout<<"Bitte gib eine Zahl groesser als 0!"<<endl;
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
void blatt_1_aufgabe_3(){
    int x = lies_ganzzahl();
    int y;
    while (true){
    if(x<=0){cout<<"Bitte gib eine natuerliche Zahl! "<<endl;
    x = lies_ganzzahl();
    }else break;}
    y = x;
    y = y+17;
    y = y*3;
    y = y%2;
    cout<<y<<endl;
}
void listing_Programm_2(){
    cout<<"Bitte gib ein Wort: ";
    string wort = lies_wort();
    char frage = '?';
    char ausrufezeichen = '!';
    char punkt = '.';
    int s = 0;
    int n = wort.size();

    for(int i = 0;i<n;i++){
        if((wort[i]==frage)||(wort[i]==punkt)||(wort[i]==ausrufezeichen)){
            s++;
        }
    }
    cout<<s<<endl;
}
void listing_Programm_3(){
    int s = 0;
    cout<<"Gib Anzahl der Liste:  "; int n=lies_ganzzahl(); 
    double liste[n];
         for(int j = 0;j<n;j++){
              liste[j] = lies_ganzzahl();
             }
        for(int i = 0;i<n;i++){
             s += liste[i];
            }
    cout<<s/n<<endl;
}
void listing_Programm_4(){
    double t;
    double x;
    x = lies_ganzzahl();
    t = x;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = x*t;
    t = t*t;
    t = t*t;
    t = x*t;
    t = t*t;
    cout<<t<<endl;
}
void alter_von_alan_turing_erraten(){
     int a;
    cout<<"Wie alt waere Alan Turing dieses Jahr geworden?  "; cin >> a;
    int b = 111;
    char n = 'n';
    char antwort ;
    while (true){
        if(a<b){cout<<"Er waere noch aelter! Willst du noch mal versuchen? y/n"<<endl;
        cin>>antwort; if(antwort== n){break;}}
        else if(a>b){cout<<"Er waere noch junger! Willst du noch mal versuchen? y/n"<<endl;
        cin>>antwort; if(antwort== n){break;}}
        else {cout<<"Ja, genau richtig!"<<endl; break;}
        cout<<"Naechter Versuch: ";cin>> a;
    }
    
}
void aufgabe_05__02(){
    int n;
    cout<<"Eine Zahl groeser als 1: ";cin>>n;
    for(int i = 0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
}