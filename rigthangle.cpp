#include<iostream>
using namespace std;



void rightangle(int n){


    for(int i = 1 ; i <= n; i++){


        for(int j =1; j <= n-i; j++){
             cout <<" ";
        }
        for(int k = 1; k <= i; k++) {
        cout<<"*";

    }
          cout << endl;
    }
}

int main (){

    //  int t ;
    //  cin >> t;
    //  for(int i =0; i < t;i++){

        int n;

        cin >>n;
        rightangle(n);
     //}
   
}