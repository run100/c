#include <stdio.h>
struct weapon {
	//char name[20];
	int atk;
	int price;
	//float price;
	struct weapon * next;
};

int main()
{
	struct weapon a,b,c, *head;	
	
	//a.name = "zhangzw";
	a.atk = 10;
	a.price = 10;

	//b.name = "run";
	b.atk = 20;
	b.price = 20;

	//c.name = "linuxc";
	c.atk = 40;
	c.price = 40;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL; 
	
	struct weapon *p;
	p = head;	
	while ( p != NULL ) {
		printf("%d,%d\n", p->atk, p->price);	
		p = p->next;
	}
	
	//return 0;
}
