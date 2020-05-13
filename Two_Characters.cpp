// Complete the alternate function below.
int alternate(string s) {
    int length = s.length();
    set<char> unique;
    for(int i=0; i<length; i++){
        unique.insert(s[i]);
    }

    int max=0;
    for(auto i=unique.begin(); i!=unique.end(); i++){
        for(auto j=i; j!=unique.end(); j++){
            char a = *i;
            char b = *j;
            if(a==b){
                continue;
            }
            string temp="";
            int count=0;
            for(int f=0; f<length; f++){
                if(s[f]==a || s[f]==b){
                    if(count == 0){
                       temp = temp + s[f]; 
                       count++;
                    }
                    else{
                        if(temp[count-1] == s[f]){
                            count = 0;
                            break;
                        }
                        temp = temp + s[f];
                        count++;
                    }
                }
            }
            if(count > max){
                max = count;
            }
        }
    }    
    return max;
}
