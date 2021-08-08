NAME				= PTFtester
CC					= @gcc
LIBFTPRINTF			= ftprintf
CFLAGS				= -I $(INC)
LDFLAGS 			= -l$(LIBFTPRINTF) -L$(PRINTF_DIR)
SRC_DIR 			= src/
SRC					= check.c
SRC_OBJ				= $(addprefix $(SRC_DIR), $(SRC:%.c=%.o))
INC					= inc/
TEST_DIR			= src/test/
TEST				= test_c.c test_s.c test_p.c test_d.c test_i.c test_u.c \
						test_hex.c test_X.c	test_percent.c \
						test_c_bonus.c test_s_bonus.c test_p_bonus.c \
						test_d_bonus.c test_i_bonus.c test_u_bonus.c \
						test_hex_bonus.c test_X_bonus.c test_percent_bonus.c
TEST_OBJ 			= $(addprefix $(TEST_DIR), $(TEST:%.c=%.o))
MAIN 				= src/PTFtester.c
MAIN_BONUS 			= src/PTFtester_bonus.c
PRINTF_DIR 			= ../

all:		$(NAME)

%.o:		%.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(TEST_OBJ) $(SRC_OBJ)
	@make -C $(PRINTF_DIR)
	@$(CC) $(LDFLAGS) -I $(INC) $(TEST_OBJ) $(SRC_OBJ) $(MAIN) -o $(NAME)

bonus:		$(TEST_OBJ) $(SRC_OBJ) 
	@make bonus -C $(PRINTF_DIR)
	@$(CC) $(LDFLAGS) -I $(INC) $(TEST_OBJ) $(SRC_OBJ) $(MAIN_BONUS) -o $(NAME)

clean:
	@find . -name "*.o" -delete
	@find . -name "*.swp" -delete
	@find . -name ".DS_Store" -delete
	@make clean -C $(PRINTF_DIR)

fclean:		clean
	@find . -name "$(NAME)" -delete
	@make fclean -C $(PRINTF_DIR)

re:			fclean all
