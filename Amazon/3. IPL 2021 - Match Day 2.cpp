    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> ans;
        deque<int> dq;
        int mx=arr[0], i=0, j=0;
        
        while(j < n) {
            while(dq.size()>0 && dq.back()<arr[j]) {
                dq.pop_back();
            }
            dq.push_back(arr[j]);
            
            if(j-i+1 < k) {
                j++;
            } else if (j-i+1 == k) {
                ans.push_back(dq.front());
                if(dq.front() == arr[i]) dq.pop_front();
                i++;
                j++;
            }
        }
        return ans;
    }
