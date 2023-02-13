NAME = ft_containers

NAME_STD = std_containers

SANITIZE = -g3 -fsanitize=address

FLAGS = #-std=c++98 -Wall -Wextra -Werror

SRCS	=	src/main_ft_vectors.cpp

OBJS	= ${SRCS:.cpp=.o}

SRCS_STD	=	src/main_std_vectors.cpp

OBJS_STD	= ${SRCS_STD:.cpp=.o}

CC = clang++

RM		= rm -f

INCLUDES = -I ./includes/

.cpp.o:
		${CC} ${FLAGS} ${SANITIZE} -c $< -o ${<:.cpp=.o} ${INCLUDES}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${SANITIZE} ${INCLUDES} ${OBJS} -o ${NAME}

${NAME_STD}:	${OBJS_STD}
				${CC} ${FLAGS} ${SANITIZE} ${OBJS_STD} -o ${NAME_STD}

all: ${NAME} ${NAME_STD}

clean:
		${RM} ${OBJS}
		${RM} *.o
		${RM} *.out

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean bonus .c.o re