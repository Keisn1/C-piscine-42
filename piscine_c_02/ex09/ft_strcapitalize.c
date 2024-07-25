/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:12:57 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/08 11:18:29 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strcapitalize(char *str);
void	to_upper(char *c);

void	to_upper(char *c)
{
	*c += 'A' - 'a';
}

void	to_lower(char *c)
{
	*c += 'a' - 'A';
}

int	is_alpha_numeric(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	if ((c >= 'a' && c <= 'z'))
		return (1);
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		prev_char_was_alphanumeric;

	prev_char_was_alphanumeric = 0;
	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if (c >= 'A' && c <= 'Z' && prev_char_was_alphanumeric)
		{
			to_lower(&str[i]);
		}
		if (c >= 'a' && c <= 'z' && !prev_char_was_alphanumeric)
		{
			to_upper(&str[i]);
		}
		prev_char_was_alphanumeric = is_alpha_numeric(c);
		c = str[++i];
	}
	return (str);
}

/* int main(void) { */
/* 	char	test1[] = "salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un"; */
/* 	ft_strcapitalize(test1); */
/* 	if (strcmp(test1, "Salut,
			Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un")) { */
/* 		printf("---: %s\n", "Salut,
			Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"); */
/* 		printf("+++: %s\n", test1); */
/* 	} */

/* 	char	test2[] = ")&*^ salut"; */
/* 	ft_strcapitalize(test2); */
/* 	if (strcmp(test2, ")&*^ Salut")) { */
/* 		printf("---: %s\n", ")&*^ Salut"); */
/* 		printf("+++: %s\n", test2); */
/* 	} */

/* 	char	test3[] = "s"; */
/* 	ft_strcapitalize(test3); */
/* 	if (strcmp(test3, "S")) { */
/* 		printf("---: %s\n", "S"); */
/* 		printf("+++: %s\n", test3); */
/* 	} */

/* 	char	test4[] = ""; */
/* 	ft_strcapitalize(test4); */
/* 	if (strcmp(test4, "")) { */
/* 		printf("---: %s\n", ""); */
/* 		printf("+++: %s\n", test4); */
/* 	} */

/* 	char	test5[] = "al;sdk (& al;sdj !@#$lkjh)"; */
/* 	ft_strcapitalize(test5); */
/* 	if (strcmp(test5, "Al;Sdk (& Al;Sdj !@#$Lkjh)")) { */
/* 		printf("---: %s\n", ""); */
/* 		printf("+++: %s\n", test5); */
/* 	} */

/* 	char	test6[] = "ASDF a"; */
/* 	ft_strcapitalize(test6); */
/* 	if (strcmp(test6, "Asdf A")) { */
/* 		printf("---: %s\n", "Asdf"); */
/* 		printf("+++: %s\n", test6); */
/* 	} */
/* 	return (0); */
/* } */
