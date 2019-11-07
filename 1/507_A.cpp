/*There's no talent here, this is hard work.
This is an obsession. Talent does not exist, we are all equals as human beings.
You could be anyone if you put in the TIME.
You will reach the top, and that's that.
I am not talented. I am obsessed.*/

/*HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD*/

//For all those who taught me how to live life:

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
using namespace std;
    vector<int> v;
//functions go here
bool isinV(int data){
    for(int x=0;x<v.size();x++){
        if(v[x]==data)
           return true;
    }
    return false;
}



int main(){
    fast;
    int n,d;
     cin>>n>>d;
         int a[n],bb[n];

         bool isinV(int data);

        for(int x=0;x<n;x++) {cin>>a[x]; bb[x]=a[x];}
    sort(a,a+n);

    int count =0;


    for(int x=0;x<n;x++) {
        if(d>= a[x]){
            d-=a[x];
            v.push_back(a[x]);
            count++;
        }
    }
    cout<<count<<endl;
    if(count ==0)
        return 0;

        int re=0;

    for(int x=0;x<n ;x++){
        if(isinV(bb[x]) and re!=count)
            {cout<<x+1<<' ';
                re++;
            }
    }
    cout<<endl;


return 0;
}
