//Crescenciano Cuautle Coyotl
//Segundo Examen Parcial 
//Programa Dos

#include <iostream>
using namespace std;

int main(){
  int x;
  x=1;

while(x<=5){
 if(x%3==0){     
 x=x+2;
}
    else{
      // Al usar comillas estabas imprimiendo una letra. Sin comillas, se imprime la variable. 
      //cout<<"x"<<endl;
      cout<<x<<endl;
      x=x+2;}
  }
  return 0;
}
