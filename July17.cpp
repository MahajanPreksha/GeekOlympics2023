#Name of the problem: First non-repeating character in a stream
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans;
		    map<char,int> m;
		    queue<char> q;
		    for(int i=0; i<A.size(); i++){
		        m[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty()){
		            if(m[q.front()]>1){
		                q.pop();
		            }
		            else{
		               ans.push_back(q.front());
		               break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}
};
