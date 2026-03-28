#include<bits/stdc++.h>
using namespace std;

class BinaryHeap{
    public : 
        // max elements that can be stored in the array
        int capacity ; 
        // current size of the array
        int size;
        // the array
        int * arr;

        BinaryHeap(int cap) {
            capacity = cap;
            size = 0; // the initial size is zero
            arr = new int[capacity]; // newly allocated conitgous block of memory that returns pointer 
        }

        int right(int i){
            return 2*i +2;
        }

        int left(int i){
            return 2*i +1;
        }
        int parent(int i){
            return (i-1)/2;
        }

        void heapify(){

        }
}