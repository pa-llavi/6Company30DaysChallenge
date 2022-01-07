int *findTwoElement(int *arr, int n) {
        int v[n];
        int *ans = new int[2];
        
        for(int i=0; i<n; i++) {
            v[i] = 0;
        }
        
        for(int i=0; i<n; i++) {
            v[arr[i]-1] += 1;
            if(v[arr[i]-1] > 1) {
                ans[0] = arr[i];
            }
        }
        
        for(int i=0; i<n; i++){
            if(v[i] == 0) {
                ans[1] = i+1;
            }
        }
        
        return ans;
        
    }
