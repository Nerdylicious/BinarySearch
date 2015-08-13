//Purpose: Binary Search returns the index of the value to find within the array
//Time complexity: O(logn) due to logn comparisons in the worst case
//Space complexity: O(1) since it does not use any auxiliary space
#include <iostream>
using namespace std;

int binary_search(int array[], int key, int low, int high){

    int middle = (low + high)/2;

    if(low > high){
        return -1;
    }
    if(array[middle] == key){
        return middle;
    }
    else if(array[middle] < key){
        return binary_search(array, key, middle + 1, high);
    }
    else{ //if(array[middle] > key)
        return binary_search(array, key, low, middle - 1);
    }
}

int main(){
    int array[] = {1, 4, 6, 8, 9, 12};
    int key = 12;
    int low = 0;
    int high = 5;
    int index = binary_search(array, key, low, high);
    cout << index << endl;
    return 0;
}
