/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:24:18 by atamas            #+#    #+#             */
/*   Updated: 2023/11/22 14:02:56 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// test begin
#include <stdio.h>
// test end

char	*free_the_memory(char **memory)
{
	int	i;

	i = 0;
	while (memory[i] != NULL)
	{
		free(memory[i]);
	}
	free(memory);
	return (NULL);
}


int	word_counter(const char *string, char delimiter)
{
	int	amount_of_words;
	int	in_word;

	amount_of_words = 0;
	in_word = 0;
	while (*string)
	{
		if (*string != delimiter && in_word == 0)
			amount_of_words++;
		if (*string == delimiter)
			in_word = 0;
		else
			in_word = 1;
		string++;
	}
	return (amount_of_words);
}

int	word_length(const char *string, char delimiter)
{
	int	length;

	length = 0;
	while (*string++ != delimiter)
		length++;
	return (length);
}

char	*allocate_memory(int	size)
{
	char	*memory;

	memory = malloc(sizeof(char) * (size + 1));
	if (!memory)
		return (NULL);
	return (memory);
}

char	**ft_split(char const *string, char delimiter)
{
	char	**memory;
	int		i;
	int		memory_index;
	int		first_letter;
	int		length;

	i = 0;
	memory_index = 0;
	first_letter = 0;
	length = 0;
	memory = malloc(sizeof(char *) * (word_counter(string, delimiter) + 1));
	if (!memory)
		return (NULL);
	while (string[i] != '\0')
	{
		allocate_memory(word_length(string[i], delimiter));
		if (allocate_memory == NULL)
		{
			free_the_memory(memory);
			return (NULL);
		}
		/* 
		While i am not at the end of the string
		if there is a word and not the delimeter than allocate memory to the word //calculate//
		and then fill it until you reach the delimeter or the null term. and then null terminate it
		*/
	}
	memory[memory_index] = NULL;
	return (memory);
}

int	main(void)
{
	char	*string = "Andor is in the school";
	// ft_split(string, ' ');
	int	num;
	num = word_length(string, ' ');
	printf("The first w length: %d\n", num);
}
