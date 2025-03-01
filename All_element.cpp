#include<iostream>
#include<bitset>
#include<utility>
#include<cmath>
#include<iterator>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//is a number is prime or not
bool isPrime(long long int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    
    return true;
}


//for factorial
long long int fact(long long int a){
    if(a==1){return 1;}
    else{
        return a*fact(a-1);
    }
}

//when you have to know the combination possible of j num of element and each combination you will take y num of element.Here the range of y is from a number(input y) to j.
long long int numofcom(long long int j, long long int y ){
if(j==y){
    return 1;
}
else{
    return (j-y+1)+numofcom(j,y+1);
}
}
