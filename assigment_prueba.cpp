/* GROUP ASSIGNMENT: (Two)


Hacer un programa en C++ que rellene un array de 10 x 10
nnúmeros enteros aleatorios del 0 al 200, luego imprima
en pantalla y diga cual es el elemento mayor y cuantas
veces se repite.

[5] [5] [5] [5]
[1] [5] [9] [9]
[2] [3] [5] [5]

Se repite mas veces el numero: _5
El numero mayor es: _9
*/

#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int randomArray[10][10];

void generate_random();

void find_biggest();

void find_most_repeated();

int main(){
	generate_random();
	find_biggest();
	find_most_repeated();
	return 0;
}

void generate_random(){
	srand(time(0));
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			randomArray[i][j] = rand() % 201;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << "\n";
		for(int j = 0; j < 10; j++){
			cout << randomArray[i][j] << " ";
		}
	}
}

void find_biggest(){
	int max = -1;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(randomArray[i][j] > max){
				max = randomArray[i][j];
			}
		}
	}
	cout<<"\n";
	cout << "\nEl numero mas grande: " << max << endl; 
}

void find_most_repeated(){
	int maxFrequency = 0;
	int mostFrequent = -1;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			int frequency = 0;
			
			for(int k = 0; k < 10; k++){
				for(int l = 0; l < 10; l++){
					if(randomArray[i][j] == randomArray[k][l]){
						frequency++;
					}
				}
			}
			
			if(maxFrequency < frequency){
				maxFrequency = frequency;
				mostFrequent = randomArray[i][j];
			}
		}
	}
	
	cout << "\nEl numero mas frecuente: " << mostFrequent << " con " << maxFrequency << " repeticiones" << endl; 
}

