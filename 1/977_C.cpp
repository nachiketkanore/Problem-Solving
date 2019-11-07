/*There's no talent here, this is hard work.
This is an obsession. Talent does not exist, we are all equals as human beings.
You could be anyone if you put in the TIME.
You will reach the top, and that's that.
I am not talented. I am obsessed.*/

/*HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD*/

//For all those who walked away from my life:

/*It's been a long day without you, my friend
And I'll tell you all about it when I see you again
We've come a long way from where we began
Oh I'll tell you all about it when I see you again
When I see you again I'll see you again*/


#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define MOD 1000000007
#define mod %
#define ull unsigned long long int
#define ll long long int
const int LARGE = int(1e9);
const int SMALL = int((-1)* 1e9);
using namespace std;


//functions go here


int main(){
    fast;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int x=0;x<n;x++){
        cin>>a[x];
    }
    sort(a,a+n);

    int ans ;

    if(k == 0){
        ans = a[0] - 1;
    }
    else
        ans = a[k-1];

        int count = 0;
    for(int x=0 ;x< n; x++){
        if(a[x] <= ans)
            count++;
    }

    if(ans < 1 or count != k)
        cout<<"-1\n";
    else
        cout<< ans<<endl;



    return 0;
}
