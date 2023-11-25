#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample
{
public:

	int	publicVar;

	Sample(void);							// Constructeur
	Sample(const Sample& other);			// Constructeur de copie (1)
	~Sample(void);							// Destructeur
	Sample& operator=(const Sample& rhs);	// Opérateur d'affectation (2)

private:

	int	_privateVar;

};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/