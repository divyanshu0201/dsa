class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i,j,left,right;
        for(i=0;i<=n-4;i++){
            for(j=i+1;j<=n-3;j++){
                left=j+1;
                right=n-1;
                while(left<right){
                    if(arr[i]+arr[j]+arr[left]+arr[right]==k){
                        vector<int> r1;
                        r1.push_back(arr[i]);
                        r1.push_back(arr[j]);
                        r1.push_back(arr[left]);
                        r1.push_back(arr[right]);
                        res.push_back(r1);
                        while(left<right && arr[left]==r1[2]){
                            left++;
                        }
                        while(right>left && arr[right]==r1[3]){
                            right--;
                        }
                    }
                    else if((arr[i]+arr[j]+arr[left]+arr[right])<k){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
                while(j+1<n && arr[j]==arr[j+1])
                    j++;
            }
            while(i+1<n && arr[i]==arr[i+1])
                    i++;
        }
        return res;
    }
};
