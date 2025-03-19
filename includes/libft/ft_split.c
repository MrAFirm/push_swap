/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:40:18 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/19 22:32:40 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_substr(char const *s, char c)
{
    int     count;
    int     in_str;

    count = 0;
    in_str = 0;
    while (*s)
    {
        if (*s != c && !in_str)
        {
            count++;
            in_str = 1;
        }
        else if (*s == c)
            in_str = 0;
        s++;
    }
    return (count);
}

int delimstrl(char const *s, char c)
{
    size_t  index;

    index = 0;
    while (s[index] && s[index] != c)
        index++;
    return (index);
}

void    ft_mstrcpy(char *dest, char const *s, int len)
{
    size_t  index;

    index = 0;
    while (index < len)
    {
        dest[index] = s[index];
        index++;
    }
    dest[index] = '\0';
}

void    free_arr(char **result_arr)
{
    int index;

    index = 0;
    if (result_arr != NULL)
    {
        while (result_arr[index])
            free(result_arr[index++]);
        free(result_arr);
    }

}

char    **ft_split(char const *s, char c)
{
    int index;
    int jndex;
    char    **result_arr;

    index = 0;
    jndex = 0;
    while (!s)
        return (NULL);
    result_arr = malloc(sizeof(char *) * count_substr(s, c) + 1);
    if (!result_arr)
        return (NULL);
    while (index < ft_strlen(s) && jndex < count_substr(s, c))
    {
        while (s[index] == c)
            index++;
        result_arr[jndex] = malloc(sizeof(char) * (delimstrl(s + index, c) + 1));
        ft_mstrcpy(result_arr[jndex++], s + index, delimstrl(s + index, c));
        index += delimstrl(s + index, c);
    }
    result_arr[jndex] = NULL;
    // free_arr(result_arr);
    return (result_arr);
}
