#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool valid(unordered_map<char,int> mpp){
         
          for(auto x : mpp){
              
               if(x.second != 0) return false;
          }
          
          return true;
    }

	int search(string pat, string txt) {
	    
	    int m = txt.size();
	    int n = pat.size();
	    
	    unordered_map<char,int> mpp;
	    
	    for(auto x : pat) mpp[x]++;
	    
	    int i = 0, j = 0, ans = 0;
	    
	    while(j < m){
	         
	         mpp[txt[j]]--;
	         
	         if(j - i + 1 == n){
	              
	               if(valid(mpp)){
	                   
	                    ans++;
	               }
	               
	               mpp[txt[i]]++;
	               i++;
	         }
	         
	         j++;
	    }
	    
	    return ans;
	}

};


int main() {

   

}
