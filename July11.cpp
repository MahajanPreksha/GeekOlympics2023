#Name of the problem: Find kth element of spiral matrix
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 	   int top = 0, bottom = n - 1, left = 0, right = m - 1;
 	   int count = 0;
 	   while(top<=bottom && left<=right){
 	       for(int i=left; i<=right; i++){
 	           count++;
 	           if(count==k){
 	                return a[top][i];
 	           }
 	       }
 	       top++;
 	       for(int i = top ; i<=bottom; i++){
 	           count++;
 	           if(count==k){
 	               return a[i][right];
 	           }
 	       }
 	       right--;
 	       if(top<=bottom){
 	       for(int i=right; i>=left; i--){
 	           count++;
 	           if(count==k){
 	               return a[bottom][i];
 	           }
 	       }
 	       bottom--;
 	       }
 	       if(left<=right){
 	           for(int i=bottom; i>=top; i--){
 	           count++;
 	           if(count==k){
 	               return a[i][left];
 	           }
 	       }
 	       left++;
 	       }
 	   }
    }
};
