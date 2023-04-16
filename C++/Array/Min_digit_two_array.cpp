#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums1={2,3,5,7};
    vector<int> nums2={1,3,6};

    int n,m;
    n=nums1.size();   
    m=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(nums1[i]==nums2[j])
            {
                    cout<<j<<endl;
            }
        }
    }
    int s1=*min_element(nums1.begin(),nums1.end());
    int s2=*min_element(nums2.begin(),nums2.end());
    cout<<min(s1,s2)*10+max(s1,s2);
}