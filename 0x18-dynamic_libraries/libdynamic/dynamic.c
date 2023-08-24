#include <stdio.h>

int _putchar(char c)
{
  return putchar(c);
}

int _islower(int c)
{
  return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int _abs(int n)
{
  return (n >= 0) ? n : -n;
}

int _isupper(int c)
{
  return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
  return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
  int len = 0;

  while (*s != '\0')
  {
    len++;
    s++;
  }
  return (len);
}

void _puts(char *s)
{
  while (*s != '\0')
  {
    putchar(*s);
    s++;
  }
  putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
  char *p = dest;

  while (*src != '\0')
  {
    *p = *src;
    p++;
    src++;
  }
  *p = '\0';
  return (dest);
}

int _atoi(char *s)
{
  int n = 0;
  int sign = 1;

  if (*s == '-')
  {
    sign = -1;
    s++;
  }
  while (*s != '\0')
  {
    if (!_isdigit(*s))
    {
      break;
    }
    n = n * 10 + (*s - '0');
    s++;
  }
  return(n * sign);
}

char *_strcat(char *dest, char *src)
{
  char *p = dest;
  while (*p != '\0')
  {
    p++;
  }
  while (*src != '\0')
  {
    *p = *src;
    p++;
    src++;
  }
  *p = '\0';
  return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
  char *p = dest;

  while (*p != '\0')
  {
    p++;
  }
  int i;
  
  for (i = 0; i < n && *src != '\0'; i++)
  {
    *p = *src;
    p++;
    src++;
  }
  if (i < n)
  {
    *p = '\0';
  }
  return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
  char *p = dest;
  int i;

  for (i = 0; i < n && *src != '\0'; i++)
  {
    *p = *src;
    p++;
    src++;
  }
  while (i < n)
  {
    *p = '\0';
    p++;
    i++;
  }
  return (dest);
}

int _strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
  {
    if (*s1 == '\0')
    {
      return (0);
    }
    s1++;
    s2++;
  }
  return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
  char *p = s;

  while (n--)
  {
    *p++ = b;
  }
  return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
  char *p = dest;
  while (n--)
  {
    *p++ = *src++;
  }
  return (dest);
}

char *_strstr(char *haystack, char *needle)
{
  int i, j;

  for (i = 0; haystack[i] != '\0'; i++)
  {
    for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
    {
      if (needle[j + 1] == '\0')
      {
        return (haystack + i);
      }
    }
  }

  return (NULL);
}
