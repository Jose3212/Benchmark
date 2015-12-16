#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
const long int SIZE=99999999;
double VECTOR[SIZE];
void inicializa(){
	for(int i = 0; i<SIZE; i++) VECTOR[i]=0; //Que no use datos basura, lo podemos inicializar de esta manera al ser variable global.
}
void mixto(){
	for(int i = 0; i<SIZE; i++) VECTOR[i]= rand() * rand() + rand() - rand() / pow(rand(),rand());
}

using namespace std;

int main(){
	double segundos[15]; 
	double media;
	double sigma;
	double desviacion;
	clock_t inicio, fin;
	inicializa();
	cout<<"Ticks,Tiempo(s)"<<endl;
	for(int i= 0; i < 15; i++){
		inicio= clock();
		mixto();
		fin=clock();
		segundos[i] = (fin - inicio);
		cout<<segundos[i]<<","<<(segundos[i]/CLOCKS_PER_SEC)<<endl;
	}
	for(int i= 0; i < 15; i++)media+=segundos[i];
	media /= 15;
	media /= CLOCKS_PER_SEC;
	for(int i=0 ; i< 15; i++)sigma+=(((segundos[i]/CLOCKS_PER_SEC)-media)*((segundos[i]/CLOCKS_PER_SEC)-media));
	desviacion = sqrt(sigma/14);
	cout<<"Media,Desviacion"<<endl;
	cout<<media<<","<<desviacion<<endl;
}
