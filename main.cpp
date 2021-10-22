#include <iostream>
using namespace std;

// Napiši kod za pronalazak najvećeg broja od dva unsesena broja

int main() {
  int a, b;

  cout<< "Unesite dva cijela pozitivna broja:"<< endl;
  cin>> a;
  cin>> b;

  if (a<b)
    cout<<"Veći broj je "<< b;
  else if (a>b)
    cout<<"Veći broj je "<< a;
  else 
   cout<<"Brojevi su jednaki.";

return 0;
  
}