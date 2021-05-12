/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** /
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"


typedef struct flag_s{
    char c;
    void (*func)(va_list list);
} flag_t;

void my_printf(char *, ...);
void get_flag(char c, va_list list);

void my_printf_d(va_list list);
void my_printf_c(va_list list);
void my_printf_s(va_list list);
void my_printf_b(va_list list);
void my_printf_ss(va_list list);
void my_printf_pers(va_list list);

void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);
void my_swap(int *, int *);
int my_putstr(char * const);
int my_strlen(char * const);
int my_getnbr(char * const);
void my_sort_int_array(int, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char * const);
char *my_strncpy(char *, char * const, int);
char *my_revstr(char *);
char *my_strstr(char *, char * const);
int my_strcmp(char * const, char * const);
int my_strncmp(char * const, char * const, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char * const);
int my_str_isnum(char * const);
int my_str_islower(char * const);
int my_str_isupper(char * const);
int my_str_isprintable(char * const);
int my_showstr(char * const);
int my_showmem(char * const, int);
char *my_strcat(char *, char * const);
char *my_strncat(char *, char * const, int);
int my_islowerupper(char);
int my_strlen_alpha(char *);
void my_put_double(double);
int my_strtol(char *str, char **endptr);
char *my_malloc(int size, char c);
char **my_str_to_word_array(char *str, char separator);
int count_word(char separator, char *str);
int my_abs(int nb);