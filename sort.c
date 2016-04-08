#include <stdio.h>
#include <stdlib.h>

int list[8];

int main(void){
  srand((unsigned)time(NULL));
  int c;
  for(c=0;c<=7;c++){
    list[c]=rand();
  }
  for(c=0;c<=7;c++){
    printf("%d\n",list[c]);
  }
}


  //【課題1】(選択) Small Cでソートプログラムを書け．ソート対象のデータは，サイズが8の一次元int配列の大域変数に格納することとし，main()関数の冒頭で適当な値で埋めることとする．ソートした結果をprint関数を使って昇順で画面に表示せよ．ソーティング・アルゴリズムは好きなものを使って良い．
