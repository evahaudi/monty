#ifndef CHAR_UTILS_H
#define CHAR_UTILS_H

void (*op_code_get(char *opc))(stack_t **stack, unsigned int line_number);
int _sch(char *s, char c);
char *_strtoky(char *s, char *d);
int _strcmp(char *s1, char *s2);
stack_t *add_int_dnode_end(stack_t **head, const int n);
stack_t *add_int_dnode(stack_t **head, const int n);
void free_dlistint(stack_t *head);
void free_vg(void);
void to_pall(stack_t **stack, unsigned int line_number);
void _mul(stack_t **doubly, unsigned int cline);
void to_queue(stack_t **doubly, unsigned int cline);
void to_pint(stack_t **doubly, unsigned int cline);
void to_swap(stack_t **doubly, unsigned int cline);
void to_push(stack_t **stack, unsigned int line_number);
void to_mod(stack_t **doubly, unsigned int cline);
void _pu_char(stack_t **doubly, unsigned int cline);
void to_stack(stack_t **doubly, unsigned int cline);
void _pstr(stack_t **doubly, unsigned int cline);
void to_pop(stack_t **doubly, unsigned int cline);
void to_nop(stack_t **doubly, unsigned int cline);
void to_add(stack_t **doubly, unsigned int cline);
void to_div(stack_t **doubly, unsigned int cline);
void to_sub(stack_t **doubly, unsigned int cline);
#endif /* CHAR_UTILS_H */

