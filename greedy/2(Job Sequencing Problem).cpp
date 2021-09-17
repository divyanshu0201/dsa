class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        bool done[n]={0};
        int c=0;
        int p=0;
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
                if(done[j]==0){
                    done[j]=1;
                    c++;
                    p+=arr[i].profit;
                    break;
                }
            }
        }
        return {c,p};
    } 
};
