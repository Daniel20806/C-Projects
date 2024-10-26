/*前置處理區*/
#include <stdio.h> //引用函式庫，就是一堆別人已經寫好的功能
#include <stdlib.h>
#define homework "第一次作業" //定義字串

/*全域變數宣告區*/
char *student;              //宣告字元指標變數
char content[] = "大家好，我是大一資管系的黃品聖，現在住在新民校區宿舍。我喜歡看nba比賽，雖然我不常打籃球，也不會打，但這不妨礙我欣賞這樣的比賽。我經常從網路上吸收新的知識，充實自我的認知。我也經常會看國際新聞，避免只了解到一部分資訊而有觀念上的誤解，所以有時候可以更快與世界接軌。\n";  //宣告字元陣列(未宣告大小)並給值
char reason[301] = "我會選擇資管系主要還是興趣導向，因為國二的時候有幸接觸到資訊，對其希望有更進一步的了解。雖然有意選資訊工程，但是因為物理化學自從國三之後就救不太回來，所以選擇需要看公民的資訊管理系。";  //宣告字元陣列(有宣告大小)並給值

/*程式起始執行區*/
int main(int argc, char *argv[])
{
  /*函數區域變數宣告區*/
  int year = 101;            //宣告整數變數並給值
  float ver = 1.1;           //宣告浮點數變數並給值

  /*程式執行內容*/
  if (argc == 4)
  {
    student = argv[1];    //指標變數指向該字串起始位置
    year = atoi(argv[2]); //字串轉整數
    ver = atof(argv[3]);  //字串轉浮點數
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr 與 stdout 稍有不同
    exit(1);  //結束程式將正數1值傳回給作業系統
  }
  printf("我是嘉大資管第%-5d級\t", year);
  printf("%s %s\t版本 {%4.4f}\n\n", student, homework, ver);
  printf("\\自我介紹\\\n%s\n", content);
  printf("\"讀資管系的目的\"\n%s\n",reason);
}
