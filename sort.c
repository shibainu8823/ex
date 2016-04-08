#include <stdio.h>
#include <stdlib.h>
#define list_max 8
int list[list_max-1];

int main(void){
  srand((unsigned)time(NULL));
  int c;
  for(c=0;c<=list_max-1;c++){
    list[c]=rand();
  }
  for(b=0;;){
  for(c=0;c<=list_max-1;c++){
    if(list[c]>list[c+1]){
      swap(list,c,c+1);}
  }}

  for(c=0;c<=list_max-1;c++){
    printf("%d\n",list[c]);
  }
}

int swap(int list[],int a,int b){
  int temp;
  temp=list[a];
  list[a]=list[b];
  list[b]=temp;
}

  //【課題1】(選択) Small Cでソートプログラムを書け．ソート対象のデータは，サイズが8の一次元int配列の大域変数に格納することとし，main()関数の冒頭で適当な値で埋めることとする．ソートした結果をprint関数を使って昇順で画面に表示せよ．ソーティング・アルゴリズムは好きなものを使って良い．
//https://github.com/takanabe/introduction-to-git/blob/master/08_rebase.md




