#include <stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @name: new dog's name
 * @age: age of new dog
 * @owner: the owner of the new dog
 * Return: pointer to new dog or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, s, d;
	struct dog *n_dog = 0;

	s = 0;
	while (name[s] != '\0')
	{
		s++; }
	d = 0;
	while (owner[d] != '\0')
	{
		d++; }

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == 0)
	{
		free(n_dog);
		return (0); }
	n_dog->name = malloc(s + 1);
	if (n_dog->name == 0)
	{
		free(n_dog->name);
		free(n_dog);
		return (0); }
	n_dog->owner = malloc(d + 1);
	if (n_dog->owner == 0)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (0); }
	for (a = 0; a <= s; a++)
	{
		n_dog->name[a] = name[a]; }
	for (a = 0; a <= d; a++)
	{
		n_dog->owner[a] = owner[a]; }
	n_dog->age = age;
	return (n_dog);
}
