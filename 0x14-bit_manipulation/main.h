#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Question 0 */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

/* Question 1 */
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

/* Question 2 */
int get_bit(unsigned long int n, unsigned int index);

/* Question 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* Question 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Question 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
