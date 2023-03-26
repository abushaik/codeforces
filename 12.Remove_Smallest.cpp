#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}   
    sort(a,a+n);
    bool b=false;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>1){
            b=true;
            break;
        }
    }
    if(b==true)
       cout<<"NO";
    else
        cout<<"YES";
    cout<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }


    return 0 ;
}
