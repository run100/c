#include <stdio.h>


int main()
{
  struct _zval_struct {
    char *name;
    int age;
    char sex;
    float score;
  }

  typedef struct _zval_struct zval;

  zval stu1,stu2;

  stu1.name = 'hello';
  stu1.age = 10;
  stu1.sex = 'M';
  stu1.score = 99.00;

  printf("name is %s\n age is %d\n sex is %s\n score is %.2f", stu1.name, stu1.age, stu1.sex, stu1.score);
  return 0;
}
