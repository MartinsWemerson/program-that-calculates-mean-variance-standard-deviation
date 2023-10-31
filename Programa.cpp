#include <iostream>
#include <iomanip>
using namespace std;
float soma=0.0 , alturas[5] = {1.85,2.01,1.88,1.95,1.76};
int i; 
int main(){
   for (i=0; i<=sizeof(alturas)/4; i++){
    nap= nap + alturas[i]/2;
   }
        
    cout << "Soma das alturas = " << ::right << ::setw(7) << soma;
}

 cout << "Desvios de Valores: " ;
    for(i=0; i<sizeof(alturas)/4; i++){
        
       
        alturas[i]= alturas[i] - nap;
        cout<< alturas[i] << " ";
    }