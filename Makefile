MAKEFLAGS += --silent
CC = cc
PRINTF_PATH = ft_printf/
LIB = -L${PRINTF_PATH} -lftprintf
PRINTF = ft_printf/libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_pushswap.c ft_algo.c ft_action.c ft_action2.c ft_action3.c ft_utils.c \
		ft_utils2.c ft_sort_3.c ft_sort.c
OBJS_EXEC = ${SRCS:.c=.o}
EXEC = push_swap

all: ${PRINTF} ${EXEC}
	echo "\033[7;32m~| Tous les fichiers sont à jour ! |~\033[0m"\

${PRINTF}:
	@make -sC ${PRINTF_PATH} all \
                && echo "\033[1;32m~| Compilation de la lib : OK |~\033[0m"\
                || echo "\033[1;31m~| Compilation de la lib : Erreur |~\033[0m"

${EXEC}:${OBJS_EXEC}
	${CC} ${CFLAGS} -I ./ft_pushswap.h ${OBJS_EXEC} ${LIB} -o ${EXEC} \
		&& echo "\033[1;32m~| Compilation du $@ : OK |~\033[0m"\
		|| echo "\033[1;31m~| Compilation du $@ : Erreur |~\033[0m"

clean:
	make -sC ${PRINTF_PATH} fclean
	rm -f ${OBJS_EXEC}\
		&& echo "\033[1;33m~| Nettoyage des .o : OK |~\033[0m"\
		|| echo "\033[0;31m~| Compilation du $@ : Erreur |~\033[0m"

fclean: clean
	rm -f ${EXEC} \
		&& echo "\033[1;33m~| Nettoyage des executables : OK |~\033[0m"\
		|| echo "\033[0;31m~| Compilation du $@ : Erreur |~\033[0m"

re: fclean all