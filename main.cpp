#include <iostream>
#include <ctime>
#include "arrayFunc.h" 
#include <chrono>
#include "sorts.h"
void selectionSort(int* ar,int size){
    int tmpMax;
    int nb;
    
    
    int tmp;
    int bufer;
    
     for(int i=0;i<size;i++){
         tmpMax=ar[i];
        nb=i;
       tmp=i;
       for (int j=i+1;j<size;j++){
           
           
           
          if(tmpMax>ar[j]){
              tmpMax=ar[j];
              
              tmp=j;
          }
       }
         
       bufer=ar[nb];
        ar[nb]=ar[tmp];
        ar[tmp]=bufer;
        }
}
/*
void lookwait() {
	srand( time( 0 ) );
	int s = 0;
	int c[7][3] = {[100, 500, 100],[500, 1000, 250],[1000, 10000, 1000],[10000, 100000, 5000],[100000, 200000, 10000],[200000, 1000000, 100000],[1000000, 10000001, 1000000]};
	for(int z = 0 ; z < 7; z++) {
		for(int i = c[z][0]; i < c[z][1]; i+=c[z][2]) {
			s = i;
			int *ar = new int[s];
			std::cout << s << "\t";
			for(int j = 0; j < s; j++) {
				ar[j] =  1 + rand() % 1000;
			}
		
			std::chrono::time_point<std::chrono::high_resolution_clock> start;
			start = std::chrono::high_resolution_clock::now();
	
			selectionSort(ar, s);
	
			std::chrono::time_point<std::chrono::high_resolution_clock> end;
			end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> diff = end - start;
			std::cout << diff.count() << std::endl;
		}
	}
}
*/

int main() {
	srand( time( 0 ) );
	int s = 0;
	int c[7][3] = {{100, 500, 100},{500, 1000, 250},{1000, 10000, 1000},{10000, 100000, 5000},{100000, 200000, 10000},{200000, 1000000, 100000},{1000000, 10000001, 1000000}};
	for(int z = 0 ; z < 7; z++) {
		for(int i = c[z][0]; i < c[z][1]; i+=c[z][2]) {
			s = i;
			int *ar = new int[s];
			std::cout << s << "\t";
			for(int j = 0; j < s; j++) {
				ar[j] =  1 + rand() % 1000;
			}
		
			std::chrono::time_point<std::chrono::high_resolution_clock> start;
			start = std::chrono::high_resolution_clock::now();
	
			selectionSort(ar, s);
	
			std::chrono::time_point<std::chrono::high_resolution_clock> end;
			end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> diff = end - start;
			std::cout << diff.count() << std::endl;
		}
	}
}


