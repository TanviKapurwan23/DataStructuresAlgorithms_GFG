bool areAnagram(string &s1, string &s2)
{
    if(s1.length() != s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s1.begin(), s2.end());
    return(s1 == s2);
}

//O(N LOG N) as sort function takes n log n time

const int CHAR = 256;
bool anaGram(string &s1, string &s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int count[CHAR] = {0};
    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0; i<CHAR; i++){
        if(count[i] != 0){
            return false;
        } return true;
    }
}

//O(Ni)