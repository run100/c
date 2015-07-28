#include <stdio.h>

#define STU struct stu

int main()
{
  STU{
    char *name;
    int num;
    char sex;
    float score;
  };

  STU stu1, stu2;
  struct stu *pstu;

  stu1.name = "zzw";
  stu1.num = 1;
  stu1.sex = 'M';
  stu1.score = 99;

  printf("Hello everyone! My name is %s, a naughty boy, but with good scores(%.2f) and top No.(%d)!", stu1.name, stu1.score, stu1.num);

  /* 指针 */
  pstu = &stu1;
  printf("Hello, My name is %s, name2 is %s\n", pstu->name, (*pstu).name);

  return 0;
}
