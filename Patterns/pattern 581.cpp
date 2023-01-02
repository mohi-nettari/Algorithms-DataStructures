#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
    int a=1,b=9;
    for(int i=0; i<9; i++) {
        for(int j=1; j<=9; j++) {

            if (j==b||j==a) {
                cout<<'x';
            }
            else {
                cout<<" ";
            }



        }
        
        cout<<endl;
        if (i<4) {
            a++;
            b--;
           // cout<<"b: "<<b<<endl;
           // cout<<"a: "<<a<<endl;
        }
        else {
            a--;
            b++;
        }
    }

    return 0;
}