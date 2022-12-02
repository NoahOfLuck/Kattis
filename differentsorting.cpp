#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

void bubblesort(vector<int>&kkb){
    bool swapped;
    int temp;
    for (int i=0;i<kkb.size();i++){
        swapped = false;
        for(int j=0;j<kkb.size()-1;j++){
            if(kkb[j]>kkb[j+1]){
                temp = kkb[j];
                kkb[j]=kkb[j+1];
                kkb[j+1]=temp;
                swapped = true;
            }
        }
        if (swapped==false){
            break;
        }
    }


}

void insertionsort(vector<int>&kkb){
    for (int i=0;i<kkb.size();i++){
        for(int j=1;j<kkb.size()-1;j++){
            if(kkb[j]<kkb[i]){
                
            }
        }
    }
}

void selectionsort(vector<int>&kkb){
    
}

void quicksort(vector<int>&kkb){}

void mergesort(){}

void radixsort(){}

void heapsort(){}

struct SLL{};

struct DLL{};

class(){};

bool comparitor();