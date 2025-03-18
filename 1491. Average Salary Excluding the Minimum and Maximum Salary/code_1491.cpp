class Solution {
public:
    double average(vector<int>& salary) {
     double ans = 0;
     for (int i:salary){
        ans += i;
     } 
    int a=*min_element (salary.begin(), salary.end());
    int b=*max_element (salary.begin(), salary.end());
    ans=ans-(a+b);
    return ans / (salary.size()-2);
    }
};
