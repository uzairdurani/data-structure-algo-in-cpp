class Solution {
private:
    bool checkCount(int s1[26],int s2[26]){
        for (int i = 0;i<26;i++){
            if (s1[i] != s2[i])
                return 0;
       
        }
         return 1;
        
    }
    
    
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for (int i = 0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index] ++;
        }
        
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i<windowSize && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if (checkCount(count1,count2))
            return 1;
        
        while (i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            
            int oldchar=s2[i-windowSize]; 
            index = oldchar -'a';
            count2[index]--;
            i++;
            if (checkCount(count1,count2)){
                return 1;
            }
        }
        return 0;
    }
    
        
};
