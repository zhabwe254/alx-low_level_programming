/**
 * hash_djb2 - Implements the djb2 algorithm for hashing
 * @str: String to hash
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
