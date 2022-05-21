#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

/*

There are NN dishes in a row on a kaiten belt, with the iith dish being of type D_i. Some dishes may be of the same type as one another.
The N dishes will arrive in front of you, one after another in order, and for each one you'll eat it as long as it isn't the same type as any of the previous K dishes you've eaten. You eat very fast, so you can consume a dish before the next one gets to you. Any dishes you choose not to eat as they pass will be eaten by others.
Determine how many dishes you'll end up eating.*/

int getMaximumEatenDishCount(int N, vector<int> D, int K) {
  int dishes = 1;
  deque<int> last;
  last.push_front(D[0]);
 
  for(int i=1;i<N;i++){
    if(find(last.begin(), last.end(), D[i]) == last.end()){
      last.push_front(D[i]);
      dishes++;
      if(last.size()>K){
        last.pop_back();
      }
    }   
  }
  
  a
  return dishes;
}

/*
Sample test case #1
N = 6
D = [1, 2, 3, 3, 2, 1]
K = 1
Expected Return Value = 5
Sample test case #2
N = 6
D = [1, 2, 3, 3, 2, 1]
K = 2
Expected Return Value = 4
Sample test case #3
N = 7
D = [1, 2, 1, 2, 1, 2, 1]
K = 2
Expected Return Value = 2*/