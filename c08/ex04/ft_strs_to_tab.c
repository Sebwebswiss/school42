#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    char *dst;
    int src_len = ft_strlen(src);
    dst = (char *)malloc(sizeof(*dst) * (src_len + 1));
    if (dst == NULL)
        return NULL;
    int pos = 0;
    while (src[pos] != 0)
    {
        dst[pos] = src[pos];
        pos++;
    }
    dst[pos] = 0;
    return dst;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *res;
    int pos = 0;

    res = (t_stock_str *)malloc(sizeof(*res) * (ac + 1));
    if (res == NULL)
        return NULL;

    while (pos < ac)
    {
        res[pos].size = ft_strlen(av[pos]);
        res[pos].str = av[pos];
        res[pos].copy = ft_strdup(res[pos].str);
        pos++;
    }

    res[pos].str = NULL;
    return res;
}
