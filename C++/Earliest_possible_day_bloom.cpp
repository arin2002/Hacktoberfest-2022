static bool compare(pair<int,int> &a,pair<int,int> &b){
    return a.second > b.second;
}

int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
   
    vector<pair<int,int>> arr;
    int ans=INT_MIN; // For storing the result of earliest possible day where all seeds are blooming
    
    for(int i=0;i<plantTime.size();i++){
        arr.push_back({plantTime[i],growTime[i]}); // Storing PlantTime and GrowTime as a Pair in order to sort them 
    }
   
    sort(arr.begin(),arr.end(),compare); // Sorting on the basis of plantTime
    
    int t=0;
    for(int i=0;i<plantTime.size();i++){
        t += arr[i].first;
        ans=max(ans , t+arr[i].second);
    }
    return ans; 
}
};