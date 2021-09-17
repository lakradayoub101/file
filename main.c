#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(void)
{
		if(!is_empty_queue())
		{
			printf("La File est Remplie");
			print_queue();
		}
		 float in = 0;
		 float b = 0;
		 float hh = 0;
		 printf("Valeurs :");
		 scanf("%f", &in);
		scanf("%f", &b);
		scanf("%f", &hh);
		push_queue(in);
		push_queue(b);
		push_queue(hh);
		printf("Nombres : %d\n", queue_length());
		print_queue();
		printf("%p\n%p\n%p\n", &in, &b, hh);
		pop_queue();
               pop_queue();
		pop_queue();
			
		return 0;
			
}
