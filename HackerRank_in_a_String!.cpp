#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int j=0;
    string pattern = "hackerrank";
    int length = s.length();

    for(int i=0; i<length; i++){
        if(s[i] == pattern[j]){
            j++;
            if(j >= 10){
                return "YES";
            }
        }
    }

    return "NO";
}
