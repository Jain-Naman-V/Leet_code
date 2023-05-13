class Solution {
public:
    bool detectCapitalUse(string word) {
        int i=0,j=0;
        int n=word.size();
        for(int k=0;k<n;k++){
            if(isupper(word[k])){
                 i++;
            }
            else if(islower(word[k])){
                j++;
            }
        }
        if(i==n){
            return true;
        }
        else if(j==n){
            return true;
        }
        else if (i==1 && j==n-1){
            if(word[0] >= 'A' && word[0] <= 'Z'){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }

    }
};
