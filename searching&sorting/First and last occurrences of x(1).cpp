vector<int> find(int arr[], int n , int x )
{
    int i;
    int idx1=-1,idx2=-1;
    vector<int> idx;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            idx1=i;
            break;
        }
    }
    for(;i<n;i++){
        if(arr[i]==x){
            idx2=i;
        }
    }
    idx.push_back(idx1);
    idx.push_back(idx2);
    return idx;
}
