NAME				= PTFtester
CC					= @gcc
LIBFTPRINTF			= ftprintf
CFLAGS				= -Wall -Werror -Wextra -I $(INC)
LDFLAGS 			= -l$(LIBFTPRINTF) -L$(PRINTF.DIR)
SRC.DIR 			= src/
SRC					= check.c
SRC.OBJ				= $(addprefix $(SRC.DIR), $(SRC:%.c=%.o))
INC					= inc/
TEST.DIR			= src/test/
TEST				= test_c.c test_s.c test_p.c test_d.c test_i.c test_u.c \
						test_hex.c test_X.c	test_percent.c
TESTB				= test_c_b.c test_c_bonus.c test_s_b.c test_s_bonus.c \
						test_p_b.c test_p_bonus.c test_d_b.c test_d_bonus.c \
						test_i_b.c test_i_bonus.c test_u_b.c test_u_bonus.c \
						test_hex_b.c test_hex_bonus.c test_X_b.c test_X_bonus.c \
						test_percent_b.c test_percent_bonus.c
TEST.OBJ 			= $(addprefix $(TEST.DIR), $(TEST:%.c=%.o))
TESTB.OBJ 			= $(addprefix $(TEST.DIR), $(TESTB:%.c=%.o))
MAIN 				= src/PTFtester.c
MAIN.BONUS 			= src/PTFtester_bonus.c
PRINTF.DIR 			= ../

all:		$(NAME)

%.o:		%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(TEST.OBJ) $(SRC.OBJ)
	@make -C $(PRINTF.DIR)
	@$(CC) $(LDFLAGS) -I $(INC) $(TEST.OBJ) $(SRC.OBJ) $(MAIN) -o $(NAME)

bonus:		$(TESTB.OBJ) $(SRC.OBJ)
	@make bonus -C $(PRINTF.DIR)
	@$(CC) $(LDFLAGS) -I $(INC) $(TESTB.OBJ) $(SRC.OBJ) $(MAIN.BONUS) -o $(NAME)

clean:
	@find . -name "*.o" -delete
	@find . -name "*.swp" -delete
	@find . -name ".DS_Store" -delete
	@make clean -C $(PRINTF.DIR)

fclean:		clean
	@find . -name "$(NAME)" -delete
	@make fclean -C $(PRINTF.DIR)

re:			fclean all
