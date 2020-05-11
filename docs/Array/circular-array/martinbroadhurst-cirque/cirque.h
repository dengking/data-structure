#ifndef CIRQUE_H
#define CIRQUE_H
/**
 * Դ�� http://www.martinbroadhurst.com/cirque-in-c.html
 */
struct cirque {
	unsigned int head; /* First element */
	unsigned int tail; /* 1 past the last element */
	unsigned int is_full;
	void ** entries;
	unsigned int size;
};
typedef struct cirque cirque;
// ��ÿ��Ԫ��ִ�еĺ���
typedef void (*cirque_forfn)(void*);

// ����һ��cirque
cirque * cirque_create(void);
// ����һ��circue
void cirque_delete(cirque * queue);
// ������Ԫ��
unsigned int cirque_insert(cirque * queue, void * data);

void * cirque_remove(cirque * queue);
void *cirque_peek(const cirque * queue);
unsigned int cirque_get_count(const cirque * queue);
void cirque_for_each(const cirque * queue, cirque_forfn fun);

#endif /* CIRQUE_H */
