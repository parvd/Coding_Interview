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
#define N NULL
struct node{
	int data;
	node *next;
};
void insert(int data,node **root){
	node *temp= new node();
	temp->data=data;
	temp->next=*root;
	*root=temp;
 	
}
void print(node *root){
	while(root!=N){
		cout<<root->data<<"->";
		root=root->next;
	}
	cout<<"NULL\n";
}
void middle(node *root){
	node *slow=root,*fast=root;
	while(slow && fast && slow->next && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<"Mid="<<slow->data<<endl;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	node *root=NULL;
	for(int i=1;i<=n;i++)
	insert(i,&root);
	
	print(root);
	middle(root);
	} 
	
	cout<<endl;
}





