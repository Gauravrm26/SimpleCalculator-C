include <stdio.h>

int
main ()
{
  char operator;
  double operand1, operand2;
  printf ("Enter the operator {+, _, *, /): ");
  scanf ("%c", &operator);
  printf ("Enter two operands: ");
  scanf ("%lf %lf", &operand1, &operand2);

  switch (operator)
    {
    case '+':
      printf ("%0.2lf + %0.2lf = %0.2lf", operand1, operand2,
	      operand1 + operand2);
      break;

    case '-':
      printf ("%0.2lf - %0.2lf = %0.2lf", operand1, operand2,
	      operand1 - operand2);
      break;

    case '*':
      printf ("%0.2lf * %0.2lf = %0.2lf", operand1, operand2,
	      operand1 * operand2);
      break;

    case '/':
      if (operand2 == 0)
	{
	  printf ("Syntax Error");
	  break;
	}
      else
	{
	  printf ("%0.2lf / %0.2lf = %0.2lf", operand1, operand2,
		  operand1 / operand2);
	  break;
	}

    default:
      printf ("Invalid Operator");
      break;
    }

  return 0;
}
