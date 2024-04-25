#include <gtk.h>

// Função callback para calcular o resultado
static void calculate_result(GtkWidget *widget, gpointer data) {
    GtkWidget *entry = (GtkWidget *)data;
    const gchar *expression = gtk_entry_get_text(GTK_ENTRY(entry));
    // Aqui você deve implementar a lógica de cálculo da expressão
    // e exibir o resultado no próprio entry ou em outro lugar da interface gráfica.
}

// Função callback para adicionar texto ao entry quando um botão é clicado
static void button_clicked(GtkWidget *widget, gpointer data) {
    GtkWidget *entry = (GtkWidget *)data;
    const gchar *text = gtk_button_get_label(GTK_BUTTON(widget));
    gtk_entry_append_text(GTK_ENTRY(entry), text);
}

int main(int argc, char *argv[]) {
    // Inicializa o GTK
    gtk_init(&argc, &argv);

    // Cria a janela principal
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculadora");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Cria um layout para os botões
    GtkWidget *grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 5);
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Cria o entry para mostrar a expressão e o resultado
    GtkWidget *entry = gtk_entry_new();
    gtk_entry_set_alignment(GTK_ENTRY(entry), 1.0);
    gtk_entry_set_editable(GTK_ENTRY(entry), FALSE);
    gtk_grid_attach(GTK_GRID(grid), entry, 0, 0, 4, 1);

    // Array de strings para os textos dos botões
    const gchar *button_labels[] = {
        "7", "8", "9", "/",
        "4", "5", "6", "*",
        "1", "2", "3", "-",
        "0", ".", "=", "+"
    };

    // Adiciona os botões à grade
    for (int i = 0; i < 16; i++) {
        GtkWidget *button = gtk_button_new_with_label(button_labels[i]);
        gtk_widget_set_size_request(button, 50, 50);
        g_signal_connect(button, "clicked", G_CALLBACK(button_clicked), entry);
        gtk_grid_attach(GTK_GRID(grid), button, i % 4, i / 4 + 1, 1, 1);
    }

    // Mostra todos os widgets
    gtk_widget_show_all(window);

    // Inicia o loop principal do GTK
    gtk_main();

    return 0;
}
