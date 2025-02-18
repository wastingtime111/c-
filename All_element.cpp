#include<iostream>
#include<bitset>
#include<utility>
#include<cmath>
#include<iterator>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

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
