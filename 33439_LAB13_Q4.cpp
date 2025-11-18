#include<iostream>
#include<string>
using namespace std;
int WordCount(char *Text, int *size){
    int count = 1;
    for(int i=0; i<*size; i++){
        if(Text[i] == ' '){
            count++;
        }
    }
    return count;
}
    int main(){
    char Text[] = "Test This has five words";
    cout << "Text: " << Text << endl;
    int size = 0;

    for(int i=0; Text[i]!='\0'; i++){
        size++;
    }
    int *ptr = &size;
    int count = WordCount(Text, ptr);
    cout << "Number of words: " << count << endl;
}
