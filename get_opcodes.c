#include "monty.h"

/**
 * op_code_get - selects the correct opcode to perform
 *
 * @opc: opcode passed
 *
 * Return: pointer to the function that executes the opcode
 */
void (*op_code_get(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", to_push},
		{"pall", to_pall},
		{"pint", to_pint},
		{"pop", to_pop},
		{"swap", to_swap},
		{"queue", to_queue},
		{"stack", to_stack},
		{"add", to_add},
		{"nop", to_nop},
		{"sub", to_sub},
		{"mul", _mul},
		{"div", to_div},
		{"mod", to_mod},
		{"pchar", _pu_char},
		{"pstr", _pstr},
		{"rotl", _rotl},

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
