PUSHSWAP = push_swap
CHECKER = checker

Checker_DIR		= ./checker_files/
PUSHSWAP_DIR	= ./push_swap_files/

LIBRARY_NAME = libft.a
LIBRARY_DIR = ./libft/
LIBRARY = $(addprefix $(LIBRARY_DIR), $(LIBRARY_NAME))

# CC = gcc

# CFLAGS = -Wall -Werror -Wextra

CHECK_HEADER 	= 	./checker_files/lib/checker.h
CHECK_FUNCTIONS =	code/ft_clearlist.c code/ft_error.c code/ft_newstack.c\
					code/ft_operations.c code/main.c code/opperators.c 

PUSHSWAP_HEADER 	= 	./push_swap_files/lib/pushswap.h
PUSHSWAP_FUNCTIONS 	= 	code/clearlist.c code/ft_error.c code/sort.c\
						code/ft_newstack.c code/opperators.c\
						code/main.c 

CHECK_FILES = $(addprefix $(Checker_DIR), $(CHECK_FUNCTIONS)) 
CHECK_OBJ	= $(patsubst %.c, %.o, $(CHECK_FILES))

PUSHSWAP_FILES 		= $(addprefix $(PUSHSWAP_DIR), $(PUSHSWAP_FUNCTIONS))
PUSHSWAP_OBJ		= $(patsubst %.c, %.o, $(PUSHSWAP_FILES))

all: $(CHECKER) $(PUSHSWAP)
$(CHECKER): $(LIBRARY_NAME) $(CHECK_OBJ)
	@gcc -o $(CHECKER) $(CHECK_OBJ) $(LIBRARY) -I $(CHECK_HEADER)

$(PUSHSWAP): $(LIBRARY_NAME) $(PUSHSWAP_OBJ)
	@gcc -o $(PUSHSWAP) $(PUSHSWAP_OBJ) $(LIBRARY) -I $(PUSHSWAP_HEADER)

$(LIBRARY_NAME):
	@make -C $(LIBRARY_DIR)
%.o: %.c
	@gcc -c -o $@ $<
clean:
	@/bin/rm -f $(CHECK_OBJ) $(PUSHSWAP_OBJ)
	@make clean -C $(LIBRARY_DIR)

fclean: clean
	@/bin/rm -f $(CHECK_OBJ) $(PUSHSWAP_OBJ)
	@/bin/rm -f $(CHECKER) $(PUSHSWAP)
	@make fclean -C $(LIBRARY_DIR)

re: fclean all