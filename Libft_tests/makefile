# O que eu quero gerar? Nome do arquivo de saída
NAME = libft.a

# De onde vem o material? (Directories)
SRCS_DIR = src # Pasta onde estão os arquivos fonte
INCLUDES_DIR = inc # Pasta onde estão os headers

# Lista de arquivos fonte (você pode colocar os nomes aqui ou usar um wildcard)
SRCS = \
	$(SRCS_DIR)/ft_is/ft_isalpha.c \
	$(SRCS_DIR)/ft_is/ft_isdigit.c \
	$(SRCS_DIR)/ft_is/ft_isalnum.c \
	$(SRCS_DIR)/ft_is/ft_isascii.c \
	$(SRCS_DIR)/ft_is/ft_isprint.c \
	$(SRCS_DIR)/ft_mem/ft_bzero.c \
	$(SRCS_DIR)/ft_mem/ft_calloc.c \
	$(SRCS_DIR)/ft_mem/ft_memchr.c \
	$(SRCS_DIR)/ft_mem/ft_memcmp.c \
	$(SRCS_DIR)/ft_mem/ft_memcpy.c \
	$(SRCS_DIR)/ft_mem/ft_memmove.c \
	$(SRCS_DIR)/ft_mem/ft_memset.c \
	$(SRCS_DIR)/ft_put/ft_putchar_fd.c \
	$(SRCS_DIR)/ft_put/ft_putendl_fd.c \
	$(SRCS_DIR)/ft_put/ft_putnbr_fd.c \
	$(SRCS_DIR)/ft_put/ft_putstr_fd.c \
	$(SRCS_DIR)/ft_str/ft_split.c \
	$(SRCS_DIR)/ft_str/ft_strchr.c \
	$(SRCS_DIR)/ft_str/ft_strdup.c \
	$(SRCS_DIR)/ft_str/ft_striteri.c \
	$(SRCS_DIR)/ft_str/ft_strjoin.c \
	$(SRCS_DIR)/ft_str/ft_strlcat.c \
	$(SRCS_DIR)/ft_str/ft_strlcpy.c \
	$(SRCS_DIR)/ft_str/ft_strlen.c \
	$(SRCS_DIR)/ft_str/ft_strmapi.c \
	$(SRCS_DIR)/ft_str/ft_strncmp.c \
	$(SRCS_DIR)/ft_str/ft_strnstr.c \
	$(SRCS_DIR)/ft_str/ft_strrchr.c \
	$(SRCS_DIR)/ft_str/ft_strtrim.c \
	$(SRCS_DIR)/ft_str/ft_substr.c \
	$(SRCS_DIR)/ft_to/ft_atoi.c \
	$(SRCS_DIR)/ft_to/ft_itoa.c \
	$(SRCS_DIR)/ft_to/ft_toupper.c \
	$(SRCS_DIR)/ft_to/ft_tolower.c \
	$(SRCS_DIR)/ft_lst/ft_lstnew.c \
	$(SRCS_DIR)/ft_lst/ft_lstadd_front.c \
	$(SRCS_DIR)/ft_lst/ft_lstsize.c \
	$(SRCS_DIR)/ft_lst/ft_lstlast.c \
	$(SRCS_DIR)/ft_lst/ft_lstadd_back.c \
	$(SRCS_DIR)/ft_lst/ft_lstdelone.c \
	$(SRCS_DIR)/ft_lst/ft_lstclear.c \
	$(SRCS_DIR)/ft_lst/ft_lstiter.c \
	$(SRCS_DIR)/ft_lst/ft_lstmap.c \

OBJS = $(SRCS:.c=.o)
# Arquivos objeto (compilados)

CC = gcc # Compilador (ATENTION -> CC could be any name, some names are not keywords, but they are just good choices)
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR) # flags de compilação


# Comando para criar a biblioteca (at the terminal: man ar) (scrolldown for r c s description)
AR = ar rcs

# Regra padrão. <- make run this first.
all: $(NAME)

# Como criar a biblioteca. 
$(NAME): $(OBJS)
	$(AR) $@ $^
# This commmand is saying sth like: AR:make a lib $@:using the target as name to the library and $^:"store this dependencies inside" (which are the objects files)
# much likely this: (ar rcs) (libft.a) (srcs/ft_putchar.o ... ... ... ...)

# Como compilar os arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# $(CC) $(CFLAGS) -c $< -o $@ vira gcc -Wall ... -c srcs/ft_putchar.c -o srcs/ft_putchar.o 

# Limpar os arquivos objetos
clean:
	rm -f $(OBJS)

# Apagar a biblioteca e os objetos
fclean: clean
	rm -f $(NAME)

# Recompilar tudo do zero
re: fclean all

# Good practise. .PHONY to a target will prevent Make from confusing the phony target with a file name.
.PHONY: all clean fclean re