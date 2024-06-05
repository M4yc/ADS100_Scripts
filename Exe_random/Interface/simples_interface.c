/*
 * File Name: Interface.c
 * Developer: Maycon
 * Creation Date: 04/06/2024
 * Description: Interface simples em C
 * Last Modification: 04/06/2024
 * Modified by: Maycon
*/

#include <gtk/gtk.h>

// Callback function for the button click event
void on_button_clicked(GtkWidget *button, gpointer data) {
    GtkWidget *entry = GTK_WIDGET(data);
    const gchar *text = gtk_entry_get_text(GTK_ENTRY(entry));
    g_print("Texto digitado: %s\n", text);
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *entry;
    GtkWidget *box;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create a new window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Interface Simples");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 100);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

    // Create a vertical box container
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), box);

    // Create a text entry
    entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(box), entry, TRUE, TRUE, 0);

    // Create a button
    button = gtk_button_new_with_label("Clique em mim");
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);

    // Connect the button "clicked" signal to the callback function
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), entry);

    // Connect the window "destroy" signal to gtk_main_quit to close the application
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Show all widgets in the window
    gtk_widget_show_all(window);

    // Run the GTK main loop
    gtk_main();

    return 0;
}
