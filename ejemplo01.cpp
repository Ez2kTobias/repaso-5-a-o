#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
 int v1[]={5,9,6,2,4}, v2[5], sum=0, i, cont=0, cont2=0, contprom=0, mayor, menor,num, pos, aux;
 float prom=0;

for(int i=0; i < 5; i++ ){
    cout<< v1[i] << "\t";
}
/*
for(int i=0; i < 5; i++ ){
    cout<< "ingrese el dato:" << "[" << i << "]" << " ";
    cin>> v2[i];
}
for(int i=0; i<5; i++){
cout<< v2[i] << endl;
}
*/
/* Sumatoria y promedio*/
for(i=0; i < 5 ; i++ ){
    sum= sum + v1[i];
}
 cout << endl << endl;
 cout<< "la suma total del vector da:" << "[" << sum << "]";
 cout << endl << endl;
 prom = sum/i;
 cout<< " el promedio del vector da:" << "[" << prom << "]";


/*Contar elementos que cumplan un condiciÃ³n*/

for(int i=0; i< 5;  i++ ){
    if(v1[i] % 2 == 0){
        cont++; 
    }

}
cout << endl << endl;
cout << "los numeros pares que hay son:" << "[" << cont << "]" << endl;

for(int i=0; i< 5; i++ ){
    if (!(v1[i] % 2 == 0)){
        cont2++; 
    }
}
cout << endl;
cout << "los numeros impares que hay son:" << "[" << cont2 << "]" << endl;

//Contar mayores al promedio

/* for(int i=0; i<5; i++){
	if(v1[i] >= prom ){
		contprom++;
	}
}
cout << endl;
cout << "hay " << contprom <<" numeros mayores al promedio" << endl;
*/
/* encontrar mayor
for(int i=0;i<5; i++){
	if(mayor<v1[i]){
		mayor=v1[i];	
	}
} 

cout << endl;
cout<< "el mayor es "<< mayor << endl;

//encontrar menor

for(int i=0;i<5; i++){
	if(menor>v1[i]){
		menor=v1[i];
	}
} 

cout << endl;
cout<< "el mayor es "<< menor << endl;

*/
cout << endl;
cout << "ingrese el número a buscar" << endl;
cin >> num;

for(int i=0;i<5;i++){
	if(v1[i]==num){
		pos=i;
		break;
	}
}
cout << endl;
cout << "el numero" << num << " esta en la posicion " << pos << endl;
cout<< endl;

for(int i=0; i<4; i++){
	for(int j=i+1; j<5; j++){
		if(v1[i]<v1[j]){
		
		aux=v1[i];
    	v1[i]=v1[j];
    	v1[j]=aux;
      }
	 }
	}

	for(int i=0;i<5 ; i++){
		
	cout<< v1[i] << "\t";
}


    return 0;
}
