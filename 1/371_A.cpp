    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n,k;
        cin>>n>>k;
        
        int rows = n/k;
        int cols = k;

        int mat[rows][cols];
        for(int x=0;x<rows;x++)
            for(int y= 0;y<cols;y++)
                cin>>mat[x][y];


            int ans = 0;
        for(int y= 0;y<cols;y++){
            int onecount =0,twocount = 0;
            int value ;

            for(int x= 0;x<rows;x++){

                int t = mat[x][y];

                if(t == 1)
                    onecount++;
                else if(t == 2)
                    twocount++;

                     value = min(onecount,twocount);
            }
            ans += value;

        }   

        cout<<ans<<endl;


        return 0;
    }