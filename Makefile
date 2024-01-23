NAME = libft.a

GET_NEXT_LINE = sources/get_next_line/get_next_line.a

GET_NEXT_LINE_PATH = sources/get_next_line/

CFLAGS = -Wall -Wextra -Werror

MK = mkdir -p

OBJECTS_PATH = objects

SOURCE_PATH = sources/functions/

HEADER = -I includes/

#GET_NEXT_LINE_HEADER = -I sources/get_next_line/includes/

SOURCES = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	ft_math_sqrt.c \

OBJECTS	:= $(addprefix $(OBJECTS_PATH)/, $(SOURCES:%.c=%.o))

all: $(GET_NEXT_LINE) $(NAME)

$(GET_NEXT_LINE):
	make -C $(GET_NEXT_LINE_PATH)

$(OBJECTS_PATH)/%.o: $(SOURCE_PATH)%.c
	$(MK) $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)

$(NAME): $(OBJECTS)
	ar x $(GET_NEXT_LINE)
	ar rcs $(NAME) *.o $?
	rm *o

clean:
	rm -rf $(OBJECTS_PATH)
	make clean -C $(GET_NEXT_LINE_PATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(GET_NEXT_LINE_PATH)

re: fclean all

.PHONY: all clean fclean re bonus
