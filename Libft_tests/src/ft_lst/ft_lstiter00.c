/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-fon <reda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:23:30 by reda-fon          #+#    #+#             */
/*   Updated: 2025/12/05 01:12:51 by reda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // node definition:
// // a place where things such as lines or systems join: 
// // A network is a series of points or nodes interconnected 
// // by communication paths.

// // this ft is very similar to ft_striteri
// // but with lists

// // ft_lstiter.c description:
// // O seu objetivo principal é percorrer uma lista encadeada 
// // e aplicar uma ação específica a cada item.
// // Is like a tool to automatize a task.

// #include "../../inc/libft.h"

// // t_list *lst (A Lista):
// // É o endereço do primeiro nó da sua lista. 
// // A função usa esse ponteiro inicial para 
// // saber de onde começar a iteração.
// // void (*f)(void *) (A Ação):
// // Este é o ponteiro para função 
// // (como vimos na ft_striteri e ft_strmapi). 
// // O usuário da ft_lstiter deve fornecer uma função 
// // que tenha a assinatura void nome_qualquer(void *conteudo).
// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	// Verificacao de ponteiros NULL
//     if (!lst || !f)
// 		return ;
//     // itera while houver a valid node
// 	while (lst)
// 	{
// 		// Aplica a funcao 'f' ao conteudo (content) do no atual
//         f(lst->content);
//         // Avanca para o proximo no na lista
// 		lst = lst->next;
// 	}
// }
// // Em resumo, ft_lstiter é a função que diz 
// // "Eu percorro a lista; você me diz o que fazer em cada parada."

// // Função auxiliar que sera passada como parametro 'f'
// static void print_content(void *content_ptr)
// {
//     if (content_ptr)
//         printf("Conteudo do no: %s\n", (char *)content_ptr);
//     else
//         printf("Conteudo do no: (NULL)\n");
// }

// int main(void)
// {
//     // Criacao manual de uma lista de teste
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));

//     // Atribuindo conteudos de teste
//     node1->content = ft_strdup("Primeiro");
//     node2->content = ft_strdup("Segundo");

//     // Ligando os nos
//     node1->next = node2;
//     node2->next = NULL; // OBRIGATORIO: Termina a lista com NULL

//     printf("Iniciando ft_lstiter:\n");

//     // Chamando a funcao que estamos testando
//     ft_lstiter(node1, &print_content);

//     // Liberando a memoria alocada manualmente
//     free(node1->content);
//     free(node1);
//     free(node2->content);
//     free(node2);

//     return (0);
// }
// // cc src/ft_lst/ft_lstiter00.c 
// // src/ft_str/ft_strdup.c src/ft_str/ft_strlen.c