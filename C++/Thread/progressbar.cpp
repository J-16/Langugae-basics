#include<bits/stdc++.h>
#include<unistd.h>
#include<pthread.h>

using namespace std;

typedef struct{
  int count;
  int progress;
  pthread_t th;
}threads;

void progress(threads *t){
  int com = (t->progress*100/ t->count) * 30 /100;
  cout << "[";
  for(int i=0;i<com;i++)
    cout << "-";
  cout << ">";
  for(int i=0;i<30-com;i++)
    cout << " ";
  cout << "]\n";
}

void *threadfun(void *arg){
  threads *t = (threads *) arg;
  for(t->progress=0; (t->progress) < (t->count); (t->progress)++)
    usleep(1000);
  return NULL;
}

int main(){
  threads t[3];

  cout << endl << endl;

  for(int i=0;i<3;i++){
    t[i].count = rand() % 10000;
    t[i].progress = 0;
    pthread_create(&t[i].th, NULL, threadfun, &t[i]);
  }

  bool done = false;
  while(!done){
    done = true;
    for(int i=0;i<3;i++){
      progress(&t[i]);
      if(t[i].progress < t[i].count)
        done = false;
    }
    if(!done)
      cout << "\033[5F";
    usleep(10000);
  }
  cout << "Completed!" << endl;
}