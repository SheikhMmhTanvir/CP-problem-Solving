//first problem solving by using class and Member function.
#include<bits/stdc++.h>
using namespace std;

class solution{
public:
        int x;
        vector<int>v;
        void getArray();
        int maxSubarray();
        void showArray();
        void showAns();
};
void solution::getArray()
{

        while(x!=0)
        {
            cin>>x;
            v.push_back(x);
        }
        v.pop_back();
}
int solution::maxSubarray() //kedani's Algorithem.
{
    int sum=0;
    int ans=0;
    for(int i=0; i<v.size(); i++)
    {
        sum+=v[i];
        ans=max(ans, sum);
    }
    return ans;
}
void solution::showArray()
{
    for(auto u: v) cout<<u<<" ";
    cout<<endl;
}
void solution::showAns()
{
    cout<<"Max subarray : "<<maxSubarray()<<endl;
}

int main()
{
    solution s;
    s.getArray();
    s.showArray();
    s.showAns();

    return 0;
}
