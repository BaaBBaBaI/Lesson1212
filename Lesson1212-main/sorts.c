#include <iostream>

#include "sorts.h"

using namespace std;

void insertionSort(int* ar,int size){
        int element;
        int indexArr;
        int j;
        int key=0;
        for(int i = 1; i < size; i++) {
        



                key=0;
                for( j = i-1; j >= 0; j--) { 
                       
                        if (ar[j] > ar[i]) {
                                key=1;
                                element = ar[i];
                                indexArr = j+1; 
                                break;
                                
                        }
                }
                if(key==0){
                     element = ar[i];
                     indexArr = j+1;
                }
                for(  j= i-1; j>=indexArr; j--){
                      
                        ar[ j+1] = ar[ j];
                }
                ar[indexArr] = element;
        }
}


void bubbleSort(int* ar,int size){
    int num;
    
    
    for(int s=size;s>0;s--){
        for(int i=0;i<size-1;i++){
            if (ar[i]<ar[i+1]){
                num = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=num;
            }
        }
    }
}

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
void countsort(int *ar, int size){
    int max = retMax(ar,size);
    int array[max+1];
	for (int i = 0; i <max+1; i++){
	    
		array[i] = 0;
	}
	
	
	
    for (int i = 0; i < size; i++){
		array[ar[i]]++;
	}
    
    int key = 0;
    for (int i = 0; i <= max; i++){
		for (int j = key; j < key + array[i]; j++){
			ar[j] = i;
		}
		key += array[i];
	}
}

void randomFilling(int* ar,int size){
     srand(time(0));
     for(int p=0;p<size;p++){
         
       
        int q = 0+rand()%(10);
        
         
        ar[p]=q;
        
    
}}

void print(int* ar,int size){
    for (int n=0;n<size;n++){
        cout << ar[n] << " ";
    }
    }

int retMax(int* ar,int size){
    int  max=ar[0];    
    for (int n=0;n<size;n++){
        if (ar[n]>max){max=ar[n];}
        
    }
    return(max);
    }
    
int retMin(int* ar,int size){
    int  min=ar[0];    
    for (int n=0;n<size;n++){
        
        if (ar[n]<min){min=ar[n];}
    }
    
    return(min);
    }
