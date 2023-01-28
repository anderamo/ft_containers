NAME = ft_containers

SANITIZE = -fsanitize=address -g3

FLAGS = -std=c++98 #-Wall -Wextra -Werror

SRCS	=	src/main_iterators.cpp


OBJS	= ${SRCS:.cpp=.o}

CC = clang++

RM		= rm -f

INCLUDES = -I ./includes/

.cpp.o:
		${CC} ${FLAGS} ${SANITIZE} -c $< -o ${<:.cpp=.o} ${INCLUDES}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${SANITIZE} ${INCLUDES} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
		${RM} ${OBJS}
		${RM} *.o
		${RM} *.out

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean bonus .c.o re