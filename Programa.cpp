#include <iostream>
#include <math.h>

 using namespace std;

int alturas[5] = { 185, 201, 188, 195, 176 };


int media = 0, i, soma = 0;

int
main ()
{
  
for (i = 0; i <= sizeof (alturas) / 4; i++)
    {
      
media = media + alturas[i];
    
}
  
media = media / (sizeof (alturas) / 4);
  
cout << "Media das Alturas: " << media << endl;
  
 
for (i = 0; i < sizeof (alturas) / 4; i++)
    {
      
 
alturas[i] = (alturas[i] - media);
      
soma = pow (alturas[i], 2) + soma;
    
 
}
  
soma = soma / (sizeof (alturas) / 4);
  
cout << "Variancia: " << soma << endl;

}


 
