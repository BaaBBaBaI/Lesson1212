#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int convertIntToChar(int num){
    int res = 0;
    while(num){
        res *= 10;
        res += num % 10;
        num = num / 10;
    }
    return res;
}

bool isPalindrom(int a, int z){
   if (z == a) {
           return true;
   } else {
           return false;
   }
}
int main(){
   int a = 0;
   cin >> a;
   int z = convertIntToChar(a);
   if (isPalindrom(a, z)) {
	   std::cout << "is palindrome" << std::endl;
   } else {
	   std::cout << "is not palindrome" << std::endl;
   }
   return 0;
   
}
