str		=	ft_printf	\
			putchar_pf	\
			putstr_pf	\
			putptr_pf	\
			putint_pf	\
			putbdec_pf	\
			putbhex_pf	\
			base_pf		\

OBJS	=	$(SRCS:.c=.o)

LIB			=	lib_pf.h
CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(LIB)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re