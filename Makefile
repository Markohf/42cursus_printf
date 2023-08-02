SRCS		=	ft_printf.c		\
				putchar_pf.c	\
				putstr_pf.c		\
				putptr_pf.c		\
				putint_pf.c		\
				putbdec_pf.c	\
				putbhex_pf.c	\
				base_pf.c		\

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
AR			=	ar rcs

NAME		=	libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re