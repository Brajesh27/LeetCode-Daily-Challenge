class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>arr;
        for(int i =0;i<capital.size();i++){
            arr.push_back({capital[i],profits[i]});
        }
        sort(arr.begin(),arr.end());
        int i =0;
        priority_queue<int>mx;
        while(k>0){
            while(i<capital.size() && w>=arr[i].first){
                    mx.push(arr[i].second);
                    i++;
            }
            if(mx.empty()){
                break;
            }
            w += mx.top();
            mx.pop();
            k--;
        }
        return w;
    }
};