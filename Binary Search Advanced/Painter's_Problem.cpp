bool isPossible(vector<int> &boards, int n, int k, int mid){
    int count = 0;
    int number = 1;
    for(int i = 0; i < n; i++){
        if(count + boards[i] >= mid){
            count+=boards[i];
        }
        else{
            number++;
            if(number > k || boards[i] > mid){
                return false;
            }
            count = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s=0;
    int e=0;
    int n = boards.size();

    for(int i = 0; i<n; i++){
        e+=boards[i];
    }
    
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=sum){
        if(isPossible(boards, n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s= mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
