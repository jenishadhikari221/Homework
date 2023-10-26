#include<iostream>
#include <string>
using namespace std;
void age();
void aufgabe_05__02();
int main(){
  /*  double x;
    cout<<"Hello"<<endl;
    cout<<"Gib mir eine Zahl: "; cin>> x;
    x = x*x;
    cout<<x<<endl;

    double b;
    cout<<"Gib mir eine Zahl größer als 0: ";cin >>b;
    if (b<0){cout<<"Verarscht nicht und gib mir eine Zahl größer als 0: ";cin >>b;}
    while(true){
        if (b<=1){
            cout<<b<<endl;
            break;
        }
        else{
            b = b-2;
        }
    }
    int a;
    int y;
    cout<<"Gib mir eine Zahl: "; cin>>a;
    y = a;
    y = a + 17;
    y = y*3;
    y = y%2;
    cout<<y<<endl;   
    string text;
    cout<<"Gib mir ein Wort";cin>>text;
    char point = '.';
    char frage = '?';
    char aufruf = '!';
    int n;int i;int s;
    n = text.length();
    for(i<n;i++;){
        if((text[i]== point) || (text[i]== aufruf)||(text[i]== frage)){
           s++;
        }
    }
    cout<<(s/(n+1))<<endl;*/
    //age();
    aufgabe_05__02();
    return 0 ;
}
void age(){
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