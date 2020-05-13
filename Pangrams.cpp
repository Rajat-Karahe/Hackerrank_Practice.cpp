// Complete the pangrams function below.
string pangrams(string s) {
    int *arr = new int[26]{0};
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            continue;
        }
        if(s[i] <= 90){
            arr[s[i]-'A']++;
        }
        else{
            arr[s[i]-'a']++;
        }
    }

    for(int i=0; i<26; i++){
        if(arr[i]==0){
            return "not pangram";
        }
    }

    return "pangram";
}

