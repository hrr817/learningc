/*  Character Sets */
// Alphabets: A-Z and a-z or all uppercase or lowercase alphabets
// Digits: 0-9
// Special Characters: , < > . - ( ) ; $ : % [ ] # ?  ' &  { } " ^ ! * / | - \ ~ +
// White Space Characters: Blank space, newline, horizontal tab, carriage return  and form feed

/* Keywords (reserved)*/
/* C is case sensitive language, these keyword must be written lowercase */
// auto	double	int	struct
// break	else	long	switch
// case	enum	register	typedef
// char	extern	return	union
// continue	for	signed	void
// do	if	static	while
// default	goto	sizeof	volatile
// const	float	short	unsigned

/* Identifiers */
// name for  variables, functions, structures etc.
// must be unique
/** Rules **/
// A-Z a-z 0-9
// first letter either a alphabet or underscore (_)
// resserved keywords are not allowed

// Valid
int A, B, C;
int _randomNumber, _random_number, RANDOM_NUMBER;

// Not valid
// int 2nums, -asd;
// int while;
