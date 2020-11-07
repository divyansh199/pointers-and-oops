#include<bits/stdc++.h>
using namespace std;
int main(){
	
		int t;
		cin>>t;
    
	while(t--){
	    int n;
	    int time[]={0,1,2,3,4,};
	    
	    cin>>n;
	    int v[n];
	    for (int i=1;i<=n;i++)
	    {
	        cin>>v[i];
	    }
	    int temp[n];
	    for(int i=1;i<=n;i++){
	        temp[i]=i*v[i]*time[i-1];
	    }
	    int max=-1;
	    int min=100;
	    int count =1;
	    for(int i=1;i<=n;i++){
	          for(int l=i+1;l<=n;l++)
	    {
	        if(temp[i]=temp[1]){
	            count++;
	        }
	        else
	        {
	            if(min>count)
	                min=count;
	            if(max<count)
	                max=count;
	           count=1;
	            
	        }
	    }
	    }
	  
	    if(min>count)
	       min=count;
	    if(max<count)
	       max=count;
	   
	   cout << min<<" "<<max<<endl;
	}
	
	return 0;
}
