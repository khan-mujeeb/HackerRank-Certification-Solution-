#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'minTime' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY files
 *  2. INTEGER numCores
 *  3. INTEGER limit
 */

long minTime(vector<int> files, int numCores, int limit) {
    long long int ans=0;
    int k=1;
    vector<int> v;
    for(int i=0;i<files.size();i++){
        if(files[i]%numCores!=0){
            ans+=files[i];
        }
        else{
            v.push_back(files[i]);
        }
    }
    cout<<ans;
    sort(v.begin(), v.end());
    for(int i=v.size()-1;i>=0;i--){
        if(k<=limit){
            ans+=(v[i]/numCores);
            k++;
        }
        else 
            ans+=v[i];
    }
    
    return ans;
}
    
    
    /**/