NAME = PTFtester.a
CC = @cc
FLAGS = -Wall -Werror -Wextra
SRCS = check.c test_s.c test_s_bonus.c test_p.c test_p_bonus.c test_d.c test_d_bonus.c test_percent.c test_percent_bonus.c
OBJS = $(SRCS:%.c=%.o)
MAIN = PTFtester.c
LIBFTPRINTF = ../libftprintf.a

all:	$(NAME)
	@$(CC) $(FLAGS) $(MAIN) $(OBJS) $(NAME) -o PTFtester

$(NAME):	$(OBJS)
	@make -C ../
	@cp ../libftprintf.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@find . -name "PTFtester" -delete
	@find . -name "*.swp" -delete
	@find . -name ".DS_Store" -delete
	@make clean -C ./..

fclean: clean
	@find . -name "$(NAME)" -delete
	@make fclean -C ./..

re: fclean all
