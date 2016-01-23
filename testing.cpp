/*Siddhant Bharti
 *Netaji Subhas Institute of Technology
 */
#ifdef __APPLE__
    #include<cassert>
    #include<iostream>
    #include<iomanip>
    #include<ctime>
    #include<cstdio>
    #include<vector>
    #include<algorithm>
    #include<utility>
    #include<queue>
    #include<stack>
    #include<string>
    #include<cstring>
    #include<sstream>
    #include<map>
    #include<set>
    #include<stdio.h>  
    #include<string.h>
    #include<math.h>
    #include <cstring>
    #include <cctype>
    #include <list>
    #include <cmath>
    #include <limits>
    #include <iomanip>
    #include <bitset> 
    #include <numeric>
    #include <climits>

#else

    #include<bits/stdc++.h>

#endif  // __APPLE__

using namespace std;

typedef pair<int,int>   PII;
typedef vector<PII>     VPII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;

typedef long long int LL;
typedef  unsigned long long int ULL;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define ALL(c) (c).begin(),(c).end()

#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

#define TR(container, it)  for( typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define REP(i,a,b) for(int i = (int)a; i < (int)b; i++)


#define DRT() int t; din(t); while(t--)


#define PlUSWRAP(index,n) index = (index+1)%n		//index++; if(index>=n) index=0
#define MINUSWRAP(index,n) index = (index + n -1)%n 	//index--; if(index<0) index=n-1
#define ROUNDOFFINT(d) d = (int)((double)d + 0.5)	//Round off d to nearest integer

#define INF 1000000000  //1 billion (10^9) 
#define MOD 1000000007 
#define EPS (const double)(1e-7)

//#define FLUSHN while(gu()!='\n')
//#define FLUSHS while(gu()!=' ')

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	    cerr << name << " : " << arg1 << std::endl;

}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);

}
#else
#define trace(...)
#endif



int main()
{
	fast_io;



	return 0;
}
