#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<bitset>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<chrono>
#include<list>
#include<climits>
#include<iomanip>

using namespace std;

#define ll long long int
#define ull unsigned long long 
#define mod 1000000007



int main(void)
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

  //code goes down here 
  int n; cin>>n;
  int k = n-1;
  for(int i=0; i<n; i++){
    for(int j=0; j<k; j++){
      cout<<" ";
    }
    int m = i+1;
    for(int l = 0; l <= i; l++){
      cout<<m++;
    }
    m--;
    for(int l = 0; l < i; l++){
      cout<<--m;
    }
    for(int j=0; j<k; j++){
      cout<<" ";
    }
    k--;
    cout<<"\n";
  }
  
  
    
}