// Complete the marsExploration function below.
int marsExploration(string s) {
    int length = s.length();
    int ans=0;
    int j=0;
    string pattern = "SOS";
    for(int i=0; i<length; i++){
        if(s[i]!=pattern[j]){
            ans++;
        }
        j = (j+1)%3;
    }

    return ans;
}
