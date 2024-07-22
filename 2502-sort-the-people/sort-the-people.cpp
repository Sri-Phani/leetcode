class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mpp;
        vector<string>vet;
        for(int i=0;i<heights.size();i++)
        {
            mpp[heights[i]]=names[i];
        }
        for(auto i:mpp)
        {
            vet.push_back(i.second);
        }
        reverse(vet.begin(),vet.end());
        return vet;
    }
};