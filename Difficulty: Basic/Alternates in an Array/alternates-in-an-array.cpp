class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> result;
        for(int i = 0; i<=arr.size()-1; i+=2){
            result.push_back(arr[i]);
        }
        return result;
        
    }
};