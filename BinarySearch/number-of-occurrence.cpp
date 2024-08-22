class Solution{
public:    
    int count(int arr[], int n, int x) {
        int left = findLeft(arr, n, x);
        if (left == -1) return 0; 
        int right = findRight(arr, n, x);
        return right - left + 1;
    }

private:
    int findLeft(int arr[], int n, int target) {
        int l = 0;
        int r = n - 1;
        int res = -1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == target) {
                res = mid;     
                r = mid - 1;   
                } else if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

    int findRight(int arr[], int n, int target) {
        int l = 0;
        int r = n - 1;
        int res = -1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == target) {
                res = mid;      
                l = mid + 1;
            } else if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};

