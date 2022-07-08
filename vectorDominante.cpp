#include<bits/stdc++.h>
using namespace std;
bool compararSecuencias(vector<int> primeraSecuencia, vector<int> segundaSecuencia);

int main(){
    /*
    0   1   2   3   4  indices
    9   7   7   7   7  primera secuencia
    8   3   4   5   6  segunda secuencia
    T   T   T   T   T  resultado = 1
    */

   int n;
   cout<<"Ingresa el tamaño de tu vector: "<<endl;
   cin>>n;  //consola - entrada de datos
   vector<int> primeraSecuencia(n);
   vector<int> segundaSecuencia(n);
   
   cout<<"Ingresa los datos de tu primer vector: "<<endl;
   for(int i = 0; i<primeraSecuencia.size(); i++){
    cin>>primeraSecuencia[i];
   }


   cout<<"Ingresa los datos de tu segundo vector: "<<endl;
   for(int i = 0; i<segundaSecuencia.size(); i++){
    cin>>segundaSecuencia[i];
   }

   bool respuesta = compararSecuencias(primeraSecuencia, segundaSecuencia);
   cout<<"La respuesta es: "<<respuesta<<endl;
   return 0;
}

bool compararSecuencias(vector<int> primeraSecuencia, vector<int> segundaSecuencia){
    int bandera;
    for(int i = 0; i < primeraSecuencia.size(); i++){
        if(primeraSecuencia[i] > segundaSecuencia[i]){
            bandera = 1;
        }else{
            bandera = 0;
        }
    }
    return bandera;
}
   