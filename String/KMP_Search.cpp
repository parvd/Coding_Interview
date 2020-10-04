//In c++
//by goku_11
#include<bits/stdc++.h>
 
using namespace std;
 
#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long int 
#define llu unsigned long long int
#define pii pair<int,int>
#define MOD 1000000007
#define fi first
#define sec second
#define N NULL
void lps(string ans,int n,int *rec){
	rec[0]=0;
	
	int i=1,j=0;
	while(i<n){
		if(ans[i]==ans[j]){
		j++;
		rec[i]=j;
		i++;	
		}
		else{
			if(j!=0){
				j=rec[j-1];
			}
			else{
				rec[i]=0;
				i++;
			}
		}
		
	}
	
}
void kmp(string str,string se){
	int m=str.length(),n=se.length();
	int rec[n];
	lps(se,n,rec);
	FOR(i,0,n-1)
	cout<<rec[i]<<" ";
	int i=0,j=0;
	while(i<m){
		if(str[i]==se[j]){
			i++;
			j++;
		}
		if(j==m){
			cout<<"found"<<i-j<<endl;
			j=rec[j-1];
		}
		else if(i<m && se[j]!=str[i]){
			if(j!=0)){
				j=rec[j-1];
			}
			else
			i++;
		}
	}
	
	
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	string str,se;
	cin>>str>>se;
	kmp(str,se);		
	} 	
}





