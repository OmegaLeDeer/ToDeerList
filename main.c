#include <gtk/gtk.h>

static void activate (GtkApplication *app, gpointer user_data) {

    /*
    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "To Deer List");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 800);

    button = gtk_button_new_with_label("Add Note");
    g_signal_connect(button, "clicked", G_CALLBACK(0), NULL);
    gtk_window_set_child(GTK_WINDOW(window), button);


    gtk_window_present(GTK_WINDOW(window));

    */

    GtkBuilder *builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "builder.xml", NULL);

    GObject *window = gtk_builder_get_object (builder, "window");
    gtk_window_set_application (GTK_WINDOW (window), app);

    GObject *button_addNote = gtk_builder_get_object (builder, "button_addNote");
    g_signal_connect (button_addNote, "clicked", G_CALLBACK (0), NULL);

    gtk_widget_set_visible (GTK_WIDGET (window), TRUE);

    g_object_unref (builder);

}

int main (int argc, char **argv) {

    GtkApplication *app;
    int status;

    app = gtk_application_new("to.deer.list", G_APPLICATION_DEFAULT_FLAGS);

    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);

    return status;
}