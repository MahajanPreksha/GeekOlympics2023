#Name of the problem: Heap Sort
class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int left = (2*i + 1);
        int right =(2*i + 2);
        int max = i;
        if(left<n && arr[left]>arr[max]){
            max = left;
        }
        if(right<n && arr[right]>arr[max]){
            max = right;
        }
        if(max!=i){
            swap(arr, max, i);
            heapify(arr, n, max);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=(n-1)/2; i>=0; i--){
            heapify(arr, n, i);
        }
    }

    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1; i>=0; i--){
            swap(arr, 0, i);
            heapify(arr, i, 0);
        }
    }
    void swap(int A[],int i,int j){
        int x=A[i];
        A[i]=A[j];
        A[j]=x;   
    }
};
