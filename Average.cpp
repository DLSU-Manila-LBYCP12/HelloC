#include <iostream>

using namespace std;

const int N_SCORES = 4;

void getScores(int nextScore[]){
  for (int i = 0; i < N_SCORES; i++){
      cout << "Next score? ";
      cin >> nextScore[i]; 
  }
}

void display(int nextScore[]){
  cout << "[ ";
  for (int i = 0; i < N_SCORES; i++){
      cout << nextScore[i] << " "; 
  }
  cout << "]\n";
}

double getAverage(int nextScore[]){
  int sum = 0;
  for (int i = 0; i < N_SCORES; i++){
      sum += nextScore[i]; 
  }
  return double(sum)/N_SCORES;
}

int main(){
    int scores[N_SCORES];
    display(scores);
    getScores(scores);
    display(scores);
    cout << "The average is "<< getAverage(scores) << endl;
    return 0;
}

double getAverage(){

}
