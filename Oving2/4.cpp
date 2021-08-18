int main(void)
{
	int a = 5;
	// En referanse må alltid referere til noe
	int &b = a;
	int *c;
	c = &b;
	// a og b er variabler, ikke pekere. * fungerer ikke foran enkle datatyper som int
	// * fungerer heller ikke foran referanser, som også bare er variabler
	a = b + *c;
	// &b er en peker til addressen til variabelen, og er ikke modifiserbar/ er konstant
	b = 2;

	return 0;
}