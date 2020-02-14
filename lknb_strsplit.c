                                                            
                            ,**************,.               
                        ,***********************.           
                      ****************************,         
               .... ********************************        
          .,*****************************************       
        ,******/*****/*********//*****///***//********      
       ,,,,***%@%**/&@#*******(@@***(&@&/**/&@/*******      
      ,,,,,,,,%@%**/&@#*******(@@*/&@&/****/&@/*******      
   .,,,,,,,,,,%@%*,/&@#*******(@@%&@#******/&@/*********,   
  .,,,,,,,,,,,%@%*,/&@#,,*****(@@**#@&/****/&@/**********,  
  ,,,,,,,,,,,,%@%*,/&@@&&&&&/*(@@***/%@&(**/&@/***********. 
   ,,,,,,,,,,,***,,**********,*********//***//***********.  
     .,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*****************,.  

#include "libft.h"

static int		lknb_stralloc(char const *s, char c, char **t)
{
	int		i;
	int		len;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (!(*t = lknb_strnew(len)))
			return (0);
		while (s[i] == c)
			i++;
		t++;
	}
	return (1);
}

static int		lknb_countword(char const *s, char c)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
		word++;
	}
	return (word + 1);
}

static char		*lknb_trim(char const *s, char c)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c && s[i])
		i++;
	if (!s[i])
		return ("\0");
	while (s[i + j + 1] != '\0')
		j++;
	while (s[i + j] == c)
		j--;
	if (!(trim = lknb_strnew(j + 1)))
		return (NULL);
	while (k < j + 1)
	{
		trim[k] = s[i + k];
		k++;
	}
	return (trim);
}

char			**lknb_strsplit(char const *s, char c)
{
	char	**list;
	char	*str;
	int		i;
	int		j;

	i = 0;
	if ((str = lknb_trim(s, c)) && (list = (char**)malloc(sizeof(char*) * lknb_countword(str, c))))
	{
		if (!(lknb_stralloc(str, c, list)))
			return (NULL);
		while (*str)
		{
			j = 0;
			while (*str != c && *str)
				list[i][j++] = *(str++);
			list[i++][j] = '\0';
			while (*str == c)
				str++;
		}
		list[i] = NULL;
		return (list);
	}
	else
		return (NULL);
}
