#include <stdlib.h>
#include "dog.h"

/**
* _strlen - function that returns the length of a string
* @s: first operand & pointer to evaluate
*Return: length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
* _strcpy - function copies the string
* @src: string to be copied
* @dest: copied to
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
* new_dog - function that creates a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
* Return: ptr, null otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *newdog, *newowner;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
    if (dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	newdog = malloc(sizeof(char)*(len_name + 1));
    if (newdog == NULL)
	{
		free(dog);
		return (NULL);
	}

    len_owner = _strlen(owner);
	newowner = malloc((len_owner + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newdog);
		free(dog);
		return (NULL);
	}

	_strcpy(newdog, name);
	_strlen(owner);
	_strcpy(newowner, owner);

	dog->name = newdog;
	dog->age = age;
	dog->owner = newowner;

	return (dog);
}
