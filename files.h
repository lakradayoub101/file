#ifndef __FILE__H__
#define __FILE__H__

// Défintition du type Booléen
typedef enum 
{
	false,
	true
}Bool;
/* Définition d'une File */
typedef struct QueueElement
{
	float value;
	struct QueueElement *next;
}QueueElement, *Queue;
// Paramétres de la File
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nb_elements = 0;
// Prototypes
Bool is_empty_queue(void);
int queue_length(void);
float queue_first(void);
float queue_last(void);
void print_queue(void);
void push_queue(float x);
void pop_queue(void);

#endif
