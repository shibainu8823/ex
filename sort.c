#include <stdio.h>
#include <stdlib.h>
#define list_max 80
int list[list_max-1];
void print_list(int list[]);
void swap(int list[],int a,int b);
void b_sort(int list[]);
int main(void);


int main(void){
  srand((unsigned)time(NULL));
  int c;
  for(c=0;c<=list_max-1;c++){
    list[c]=rand();
  }
  b_sort(list);
  print_list(list);
}

void b_sort(int list[]){
  int c;
  int b;
  for(c=0;c<=list_max-1;c++){
    list[c]=rand();
  }
  for(b=0;b<=list_max-1;b++){
    for(c=0;c<=list_max-2;c++){
      if(list[c]>list[c+1]){
    	swap(list,c,c+1);}
    }
  }
}


void swap(int list[],int a,int b){
  int temp;
  temp=list[a];
  list[a]=list[b];
  list[b]=temp;
}

void print_list(int list[]){
  int c;
  for(c=0;c<=list_max-1;c++){
    printf("%d\n",list[c]);
  }
}


  //【課題1】(選択) Small Cでソートプログラムを書け．ソート対象のデータは，サイズが8の一次元int配列の大域変数に格納することとし，main()関数の冒頭で適当な値で埋めることとする．ソートした結果をprint関数を使って昇順で画面に表示せよ．ソーティング・アルゴリズムは好きなものを使って良い．
//https://github.com/takanabe/introduction-to-git/blob/master/08_rebase.md




