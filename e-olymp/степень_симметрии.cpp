#include<iostream>

using namespace std;
/*
int row(int a, int level){
    if (level == 0){
        return 12+8*(n-1);
    }
    else{
        f
    }
}*/

int main(){
    int n, ans;
    cin >> n;
    int diff = 0;
    for (int i = 0; i < 100 000; i++){
        if (fabs(i^3 - n) < diff){
           diff = fabs(i^3 - n)
           V = i^3
   }
    }
    return 0;
}