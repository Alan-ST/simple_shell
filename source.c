#include "holberton.h"

void unget_char(struct source_s *src)
{
    if(src->curpos < 0)
    {
        return;
    }
	src->curpos--;
}
char next_char(struct source_s *src)
{
    char c1 = 0;

	if(!src || !src->buffer)
    {
        errno = ENODATA;
        return ERRCHAR;
    }

	if(src->curpos == INIT_SRC_POS)
    {
        src->curpos  = -1;
    }
    else
    {
        c1 = src->buffer[src->curpos];
		return (c1);
    }
	if(++src->curpos >= src->bufsize)
    {
        src->curpos = src->bufsize;
        return EOF;
    }
	return src->buffer[src->curpos];
}

char peek_char(struct source_s *src)
{
    long pos = src->curpos;

	if(!src || !src->buffer)
    {
        errno = ENODATA;
        return ERRCHAR;
    }
	if(pos == INIT_SRC_POS)
    {
        pos++;
    }
    pos++;
	if(pos >= src->bufsize)
    {
        return EOF;
    }
	return src->buffer[pos];
}

void skip_white_spaces(struct source_s *src)
{
    char c;    if(!src || !src->buffer)
    {
        return;
    }
	while(((c = peek_char(src)) != EOF) && (c == ' ' || c == '\t'))
    {
        next_char(src);
    }
}
