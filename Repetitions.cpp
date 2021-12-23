// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤106
// Example

// Input:
// ATTCGGGA

// Output:
// 3

// Code In CPP-
// 1st Method


// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     cin>>str;
//     // char A,C,G,T;
//     int countA=0,countC=0,countG=0,countT=0;

//     for(int i=0;i<str.length();i++){
//         if(str[i]=='A'){
//             countA++;
//         }
//         else if(str[i]=='C'){
//             countC++;
//             }
//         else if(str[i]=='G'){
//             countG++;
//         }
//         else{
//             countT++;
//         }
//     }
//     if(countA>countC && countA>countG && countA > countT){
//         cout<<countA;
//     }
//     else if(countC>countA && countC>countG && countC>countT){
//         cout<<countC;
//     }
//     else if(countG>countA && countG>countC &&countG>countT){
//         cout<<countG;
//     }
//     else if (countT>countA && countT>countC &&countT>countG){
//         cout<<countT;
//     }
//     else{
//         cout<<"1";
//     }
//     return(0);
// }


// 2nd mehtod

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length(), best = 0, curr = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best;

    return 0;
}
