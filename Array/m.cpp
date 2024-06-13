#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    
    for(int i = 0; i < n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Check if allocation is possible
    if(m > n) return -1;

    int s = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e) {
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main() {
    // Test case
    int n = 5;
    int m = 6;
    vector<int> arr = {2, 8, 8, 4, 5};

    int result = findPages(arr, n, m);
    // Output the result
    return result; // should output -1
}
