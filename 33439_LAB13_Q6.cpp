#include <iostream>
using namespace std;
void SentenceCase(char* buf, int* len) {
  int L=*len;
  bool start=true;
  for (char* i=buf; i<buf+L; i++) {
    char ch=*i;
    if (ch=='.'){
         start=true; 
         continue; }
    if(ch>='a' && ch<='z'){
      if(start){
         *i=ch-32;
          start=false;
         }
    } 
    else if(ch>='A' && ch<='Z'){
      if(start) { 
        start=false;
     }
      else{
        *i=ch+32;
     }
    } 
    else {
      start=false;
    }
  }
}
int main(){
  int m; 
  cout<<"Enter number of characters: ";
  cin>>m;
  char* p=new char[m];
  cout<<"Enter characters: ";
  for(int i=0; i<m; i++) cin>>p[i];
 SentenceCase(p, &m);
cout<<"Sentence Case: ";
  for(int i=0; i<m; i++) cout<<p[i];
  cout<<"\n";
  delete[] p;
  return 0;
}
