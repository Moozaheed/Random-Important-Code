//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;

//Using Loops
void subArray(int arr[], int n)
{
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
  
            cout << endl;
        }
    }
}

//Subarray Sum

void subarraysum(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			curr+=arr[j];
			cout<<curr<<sp;
		}
	}

}

//Longest Arithematic Subarray
//Array er value gular distance same hobe


int LAS(int arr[],int n)
{
	int ans=2;
	int pd=arr[1]-arr[0];
	int j=2;
	int curr=2;

	while(j<n)
	{
		if(pd==arr[j]-arr[j-1])
		{
			curr++;
		}
		else
		{
			pd=arr[j]-arr[j-1];
			curr=2;
		}
		ans=max(ans,curr);
		j++;
	}
	cout<<ans<<dl;
}


void Boom()
{
	//Let's Move

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	LAS(arr,n);

	




}

int main()
{
	Boost;

	int t=1;       //cin>>t;
	for(int i=1;i<=t;i++)
	{
		//cout<<"Case "<<i<<" : ";
		Boom();
	}

	return 0;

}
