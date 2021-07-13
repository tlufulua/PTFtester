NAME		= PTFtester
CC			= @gcc
LIBFTPRINTF	= ftprintf
CFLAGS		= -Wall -Werror -Wextra -I $(INC)
LDFLAGS 	= -l$(LIBFTPRINTF) -L$(PRINTF.DIR)
SRC.DIR 	= src/
SRC			= check.c
SRC.OBJ		= $(addprefix $(SRC.DIR), $(SRC:%.c=%.o))
INC			= inc
TEST.DIR	= src/test/
TEST		= test_c.c test_c_bonus.c test_s.c test_s_bonus.c test_p.c \
			   test_p_bonus.c test_d.c test_d_bonus.c test_i.c test_i_bonus.c \
			   test_u.c test_u_bonus.c test_x.c test_x_bonus.c test_X.c \
			   test_X_bonus.c test_percent.c test_percent_bonus.c
TEST.OBJ 	= $(addprefix $(TEST.DIR), $(TEST:%.c=%.o))
MAIN 		= src/PTFtester.c
PRINTF.DIR 	= ../

all:		$(NAME)

%.o:		%c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(LIBFTPRINTF) $(TEST.OBJ) $(SRC.OBJ)
	@$(CC) $(LDFLAGS) -I $(INC) $(TEST.OBJ) $(SRC.OBJ) $(MAIN) -o $(NAME)

$(LIBFTPRINTF):
	@make -C $(PRINTF.DIR)

clean:
	@find . -name "*.o" -delete
	@find . -name "*.swp" -delete
	@find . -name ".DS_Store" -delete
	@make clean -C $(PRINTF.DIR)

fclean:		clean
	@find . -name "$(NAME)" -delete
	@make fclean -C $(PRINTF.DIR)

re:			fclean all
