#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define MAX_LEN 100010

int firstUniqChar(char* s) {
  int i, hash[200] = {0};
  
  for(i = 0; i < strlen(s); i++)
      hash[s[i]] += 1;

  for(i = 0; i < strlen(s); i++){
    if(hash[s[i]] == 1){
      return i;
    }
  }

  return -1;
}

int main(){
    char word[MAX_LEN];
    int i, hash[200] = {0};

    fgets(word, MAX_LEN, stdin);

    printf("%d", firstUniqChar(word));
    return 0;
}