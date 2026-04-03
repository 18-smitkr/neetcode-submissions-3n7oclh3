class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            int sbt=abs(s[i+1]-s[i]);
            sum+=sbt;
        }
        return sum;
        
    }
};