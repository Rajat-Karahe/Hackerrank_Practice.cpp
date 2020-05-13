// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    // long unsigned int *arr = new long unsigned int[26]{0};
    // unordered_map<long unsigned int, long unsigned int> mapp;
    // for(long unsigned int i=0; i<s.length(); i++){
    //     arr[s[i]-'a']++;
    //     mapp[arr[s[i]-'a']*(s[i]-'a'+1)]++;
    // }

    // vector<string> output;
    // for(long unsigned int i=0; i<queries.size(); i++){
    //     long unsigned int val = queries[i];
    //     if(mapp.count(val) > 0){
    //         output.push_back("Yes");
    //     }
    //     else{
    //         output.push_back("No");
    //     }
    // }

    int *arr = new int[26]{0};
    vector<bool> *mapp = new vector<bool>(10e7);
    // cout << mapp->at(4) << endl;
    int mul = 1;
    char prev = '1';
    for(int i=0; i<s.length(); i++){
        int w = s[i]-'a'+1;
        if(s[i]==prev){mul++; w*=mul;}
        else mul=1;
        prev = s[i];
        mapp->at(w)=true;
        // arr[s[i]-'a']++;
        // mapp->at((arr[s[i]-'a'])*(s[i]-'a'+1)) = true;
    }

    vector<string> output;
    for(int i=0; i<queries.size(); i++){
        if(mapp->at(queries[i])){
            output.push_back("Yes");
        }
        else{
            output.push_back("No");
        }
    } 

    delete []arr;
    delete mapp;
    return output;
}
