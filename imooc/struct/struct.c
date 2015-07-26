#include <stdio.h>

struct weapon{
	char name[20];
	int atk;
	int price;
};

int main()
{
	struct weapon weapon_1 = { "weapon_name", 10, 999};
	printf("name is %s\n",weapon_1.name);	
	printf("price is %d\n",++weapon_1.price);
	
	printf("point is\n");
	struct weapon * w;
	w = &weapon_1;
	printf("%s,%d\n", w->name, (*w).atk);
	
	printf("struct arr\n");
	struct weapon weapon2[2] = { {"name1",99,99}, {"name2",88,88}};
	printf("%s,%d\n",weapon2[0].name, weapon2[1].price);

	struct weapon * p;
	p = weapon2;
	printf("arr struct name is %s", p->name);
	//p++;
	//printf("arr2 struct name is %s", p->name);
	return 0;
}
