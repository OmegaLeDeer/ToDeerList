#include <gtk/gtk.h>

#include "toDeerList.h"
#include "toDeerListWin.h"

struct _ToDeerListWindow
{
  GtkApplicationWindow parent;
};

G_DEFINE_TYPE(ToDeerListWindow, to_deer_list_window, GTK_TYPE_APPLICATION_WINDOW);

static void
to_deer_list_window_init (ToDeerListWindow *win)
{
    gtk_widget_init_template(GTK_WIDGET(win));
}

static void
to_deer_list_window_class_init (ToDeerListWindowClass *class)
{
    gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(class), "./toDeerListWindow.xml");
}

ToDeerListWindow *
to_deer_list_window_new (ToDeerList *app)
{
  return g_object_new (TODEERLIST_WINDOW_TYPE, "application", app, NULL);
}

void
to_deer_list_window_open (ToDeerListWindow *win, GFile *file)
{
}
