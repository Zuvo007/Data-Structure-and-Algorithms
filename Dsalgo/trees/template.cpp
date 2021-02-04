#include <iostream> 
#include <string> 
#include <set> 
#include <map> 
#include <stack> 
#include <queue> 
#include <vector> 
#include <utility> 
#include <iomanip> 
#include <sstream> 
#include <bitset> 
#include <cstdlib> 
#include <iterator> 
#include <algorithm> 
#include <cstdio> 
#include <cctype> 
#include <cmath> 
#include <math.h> 
#include <ctime> 
#include <cstring>


using namespace std;  
#define endl "\n" 
using namespace std; 
#define ll long long 
#define ld long double 
#define ui unsigned int 
#define ull unsigned ll 
#define foi(n) for(ll i=0;i<n;i++) 
#define foj(n) for(ll j=0;j<n;j++) 
#define fok(n) for(ll k=0;k<n;k++) 
#pragma GCC optimize("O3", "unroll-loops") 
#define fixed(); cout << fixed << setprecision(20); 
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
 
/*****************************************************************************/ 
 
 
#define graph          vector<vector<int>> 
#define V              vector 
typedef pair<int, int> pii; 
typedef pair<ll, ll>   pll; 
typedef V<int>         vi; 
typedef V<ll>          vll; 
typedef V<string>      vs; 
typedef V<double>      vd; 
typedef V<pii>         vpii;              
typedef V<pll>         vpll;              
typedef pair<int,pii>  piii;              
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;    
 
/*****************************************************************************/ 
 
#define mp                   make_pair 
#define eb                   emplace_back 
#define pb                   push_back 
#define pf                   push_front 
#define popb                 pop_back 
#define popf                 pop_front 
#define hashmap              unordered_map 
#define hashset              unordered_set 
#define lb                   lower_bound 
#define ub                   upper_bound 
#define all(a)               (a).begin(), (a).end() 
#define rall(a)              (a).rbegin(), (a).rend() 
#define ff                   first 
#define ss                   second 
#define lbpos(v,x)           (int)(lower_bound(all(v),x)-v.begin())//=v.size()==>No LB  
#define ubpos(v,x)           (int)(upper_bound(all(v),x)-v.begin())//=v.size()==>No UB 
 
/*****************************************************************************/ 
 
//for declaring most used global variables and constants 
ll mod=1e9+7; 
 
//For Calculating nCr 
template<typename T> 
T nCr(T n, T r) { 
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r) 
    int  ans = 1,i; 
    for(i = 1; i <= r; i++) { 
        ans *= n - r + i; 
        ans /= i; 
    } return ans; 
} 
 
//power optimized 
template<typename T,typename T2> 
T2 power(T x, T y)  
{  
    if (y == 0)  return 1;  
    T2 res=power(x,y/2); 
    if (y % 2)  return res*res*x; 
    return res*res;  
} 
 
//return number of set bits in a given number 
template<typename T> 
ll countSetBits(T n)  
{  
    return __builtin_popcount (n); 
} 
 
//return true if number is prime 
template<typename T> 
bool isPrime(T n)  
{  
    // Corner cases  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    if (n % 2 == 0 || n % 3 == 0)  return false;  
    for (ll i = 5; i * i <= n; i = i + 6)  
        if (n % i == 0 || n % (i + 2) == 0)  
            return false;  
   return true;  
}  
 
//return true if string is palindrome 
bool ispalindrome(string s) 
{ 
    ll len=s.length(); 
    foi(len){ 
        if(s[i]!=s[len-i-1]) 
        return false; 
    } 
    return true; 
} 
 
//for string with space use std::getline(cin,string_name); 

 
int32_t main() { 
    fast();fixed(); 
    #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    #endif 
    
    ll test; 
    cin>>test; 
    while(test--){ 
 
    } 
     
    return 0; 
} 