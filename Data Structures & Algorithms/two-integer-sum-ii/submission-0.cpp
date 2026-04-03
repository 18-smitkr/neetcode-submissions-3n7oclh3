class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lt=0, rt=numbers.size()-1;
        while(lt<rt){
            int sum=numbers[lt]+numbers[rt];
            if(sum==target){
                return {lt+1, rt+1};
            }
            else if(sum<target){
                lt++;
            }
            else{
                rt--;
            }
        }
    return {-1,-1} ;
    }
};
