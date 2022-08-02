int firstMissing(int arr[], int n)
{
    // Write your code here.
    int check[1000000] = {0};
    for(int i = 0;i<n;i++){
        if (arr[i]>0){
            check[arr[i]] = 1;
        }
    }
    
    for (int i = 1;i<n+1;i++){
        if (check[i]==0){
            return i;
        }
        }
    }

