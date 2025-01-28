/*
Gievn an aeeay of integer numbers, 'arr[i]' represents the number number of pages in the i-th book.
There are m number of students and the task is to allocate all the books to the students. Allocate books in such a way that 
1. Each student gets atleast one book
2. Each book should be allocated to only one student 
3. Book allocation should be in a contiguous manner

you have to allocate the books to m studnets such that the maximum number of pages assigned to each student is minimum.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countStudents(vector<int>& arr, int pages){
    int students = 1;
    long long pagesStudent = 0;
    for(int i = 0; i < arr.size(); i++){
        if(pagesStudent + arr[i] <= pages){
            pagesStudent += arr[i];
        }
        else{
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int k){
    if(k > arr.size()){
        return -1;
    }

    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    while(start <= end){
        int mid = start + (end - start)/2;
        int n = countStudents(arr, mid);
        if(n > k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
}
int main(){
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout<<  findPages(arr, k);
    return 0;
}
