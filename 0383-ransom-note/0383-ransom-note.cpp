class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};       //freq array is here 
        for(char c: magazine){  
            count[c-'a']++;

        }
    for(char c: ransomNote){
        if(count[c - 'a']==0){
            return false;

        }
        count [c-'a']--;   

    }
    return true;
    

        
    }
};