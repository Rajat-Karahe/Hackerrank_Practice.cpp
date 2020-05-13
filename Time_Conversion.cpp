/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int length = s.length();
    string cmp = s.substr(0, 2);
    if(cmp.compare("12")==0){
        if(s[length-2] == 'A'){
            return "00" + s.substr(2, length-4);
        }
        else{
            return s.substr(0, length-2);
        }
    }

    if(s[length-2] == 'A'){
        return s.substr(0, length-2);
    }
    else{
        int temp = stoi(s.substr(0, 2));
        temp = temp + 12;
        string first = to_string(temp);
        return first + s.substr(2, length-4);
    }
}
