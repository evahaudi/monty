#include "monty.h"

/**
 * op_code_get - selects the correct opcode to performs
 *
 * @opc: opcode passed
 *
 * Return: pointer to the function that executes the opcodes
 */
void (*op_code_get(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"pall", to_pall},
		{"mul", _mul},
		{"queue", to_queue},
		{"pint", to_pint},
		{"swap", to_swap},
		{"push", to_push},
		{"mod", to_mod},
		{"pchar", _pu_char},
		{"stack", to_stack},
		{"pstr", _pstr},
		{"pop", to_pop},
		{"nop", to_nop},
		{"add", to_add},
		{"div", to_div},
		{"sub", to_sub},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (_strcmp(instruct[i].opcode, opc) == 0)
			break;
	}

	return (instruct[i].f);
}
