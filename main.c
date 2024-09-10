#include </home/omarak/Desktop/omar/includes/minishell.h>

int main() {
    char *input;

    while (1) {
        input = readline("minishell> ");
        if (!input) {
            break;  // Handle EOF (Ctrl+D)
        }
        add_history(input);
        printf("You entered: %s\n", input);
        free(input);
    }
    return 0;
}
