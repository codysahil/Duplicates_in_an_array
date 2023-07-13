vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>1 && mp[arr[i]]<3){
                ans.push_back(arr[i]);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
            return ans;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
