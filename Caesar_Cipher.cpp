// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    k = k%26;
    cout << k << endl;
    int length = s.length();
    for(int i=0; i<length; i++){
        if(65<=s[i] && s[i]<=90){
            int temp = s[i] + k;
            if(temp > 90){
                temp = temp-90+64;
            }
            s[i] = temp;
        }
        else if(97<=s[i] && s[i]<=122){
            int temp = s[i] + k;
            if(temp > 122){
                temp = temp-122+96;
            }
            s[i] = temp;
        }
    }

    return s;
}
