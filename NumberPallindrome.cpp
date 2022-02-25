#include<bits/stdc++.h>

bool CheckNumberPallindrome(int num){

    int remainder=0;
    int reverse=0;
    int numCopy =  num;

    while(num != 0){
        remainder = num%10;
        reverse = reverse *10 +remainder;
        num/=10; 
    }


    if(numCopy == reverse){
        return true;
    }else{
        return false;
    }
}



int main(){
    int num = 121;
    bool result = CheckNumberPallindrome(num);
    std::cout<<result;
}