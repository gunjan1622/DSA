vector<int> getMaxArray (vector<int> arr){ 
    vector<int> ans;
    vector<queue<int>> all(ssize(arr)+1);
    for (int i = 0; i < ssize(arr); ++i) if (arr[i] < ssize(arr)){
        all[arr[i]].push(i); 
    }
    for (int i = 0, j = -1; i < ssize(arr); ++i){ 
        for (int mex = 0; ; ++mex){ 
            while(!all[mex].empty() && all[mex].front() <= j){ 
                all[mex].pop();
            }
            if (all[mex].empty()){ 
                ans.push_back(mex);
                j = i; 
                break;
            }else{ 
                i = max(i, all[mex].front());
            }
        }
    }
    return ans;
}